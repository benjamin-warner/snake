#ifndef SNK_GAME_H
#define SNK_GAME_H

#include <SDL.h>
#include "snake.h"
#include "level.h"

const int FIELD_SIZE = 20;

class game{
	game();
	~game();
	void handleInput(SDL_Event&);
public:
	bool running;
	box level;
	snake player;
};

game::game(){
	level.setSize(FIELD_SIZE);
	level.initialize();
}

game::~game(){

}

void game::handleInput(SDL_Event &event){
	while(SDL_PollEvent(&event) != 0){
		switch(event.type){
		case SDL_QUIT:
			running = false;
		case SDL_KEYDOWN:
			switch(event.key.keysym.sym){
			case SDLK_UP:
				player.setDirection(UP);
				break;
			case SDLK_DOWN:
				player.setDirection(DOWN);
				break;
			case SDLK_LEFT:
				player.setDirection(LEFT);
				break;
			case SDLK_RIGHT:
				player.setDirection(RIGHT);
				break;
			case SDLK_p:
				pause == true;
				break;
			default:
				break;
			}
		default:
			break;
		}
	}
}

#endif
