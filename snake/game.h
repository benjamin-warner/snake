#ifndef SNK_GAME_H
#define SNK_GAME_H

#include <SDL.h>
#include "snake.h"
#include "level.h"

const int FIELD_SIZE = 20;

class game{
	game();
	~game();
	void handleInput();
public:
	box level;
	snake player;
};

game::game(){
	level.setSize(FIELD_SIZE);
	level.initialize();
}

game::~game(){

}

void game::handleInput(SDL_EVENT &){

}

#endif
