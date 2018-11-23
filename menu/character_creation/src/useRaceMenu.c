#include "../includes/useRaceMenu.h"

int	useRaceMenu(SDL_Rect *pos, unsigned int *race, SDL_KeyboardEvent *key)
{
	switch(key->keysym.sym)
	{
		case (SDLK_UP) :
			if (pos->y > RACE_MENU_LIMIT_UP)
				pos->y -= CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_HEIGHT_BOX;
			break;
		case (SDLK_DOWN) :
			if (pos->y < RACE_MENU_LIMIT_UP + 2 * (CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_HEIGHT_BOX) - 2)
				pos->y += CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_HEIGHT_BOX;
			break;
		case (SDLK_LEFT) :
			if (pos->x > CHARACTER_MENU_DIMENSION_MARGIN)
				pos->x -= CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_WIDTH_BOX;
			break;
		case (SDLK_RIGHT):
			if (pos->x < (2 * CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_WIDTH_BOX) - 2)
				pos-> x += CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_WIDTH_BOX;
			break;
		case (SDLK_e) :
		case (SDLK_ESCAPE) :
		case (SDLK_RETURN) :
			*race = (pos->y - RACE_MENU_LIMIT_UP + 2) / (CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_HEIGHT_BOX);
			*race += 10 * ((pos->x - CHARACTER_MENU_DIMENSION_MARGIN + 2) / (CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_WIDTH_BOX));
			return (1);
			break;
		default :
			break;
	}
	*race = (pos->y - RACE_MENU_LIMIT_UP + 2) / (CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_HEIGHT_BOX);
	*race += 10 * ((pos->x - CHARACTER_MENU_DIMENSION_MARGIN + 2) / (CHARACTER_MENU_DIMENSION_MARGIN + CHARACTER_MENU_DIMENSION_WIDTH_BOX));
	return (0);
}