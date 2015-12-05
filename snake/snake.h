#ifndef SNK_SNAKE_H
#define SNK_SNAKE_H

#include <iostream>
#include <vector>

enum direction{
	UP,
	DOWN,
	LEFT,
	RIGHT
};

class snake{
public:
	snake();
	~snake();
	void addSegment();
	void updateSnake();
	void drawSnake();
	direction getDirection();
	void setDirection(direction);

private:
	std::vector<char> segments;
	direction headDirection, tailDirection;
};

snake::snake(){
	segments.push_back('O');
	segments.push_back('o');
	headDirection = UP;
	tailDirection = UP;
}

snake::~snake(){}

void snake::addSegment(){}

direction snake::getDirection(){
	return headDirection;
}

#endif
