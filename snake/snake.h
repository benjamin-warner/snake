#ifndef SNK_SNAKE_H
#define SNK_SNAKE_H

#include <iostream>
#include <vector>

class snake{
public:
	snake();
	~snake();
	void addSegment();
	void updateSnake();
	void drawSnake();

private:
	std::vector<char> segments;
};

snake::snake(){
	segments.push_back('O');
	segments.push_back('o');
}

snake::~snake(){}

void snake::addSegment(){

}

#endif
