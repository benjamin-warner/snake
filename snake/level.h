#ifndef SNK_LEVEL_H
#define SNK_LEVEL_H

#include <iostream>

class box{
public:
	box();
	~box();
	void setSize(int);
	void initialize();
	void deployFruit();
	void startSnake();
	void handleInput();

private:
	char ** level;
	int field_size;
};

box::box(){

}

box::~box(){

}

void box::setSize(int size){
	field_size = size;
}

void box::initialize(){
	level = new char*[field_size];
	for (int i = 0; i < field_size; ++i){
		level[i] = new char[field_size];
	}

	for (int i = 0; i < field_size; ++i){
		for (int j = 0; j < field_size; ++j){
			if (i == 0 || i == field_size || j == 0 || j == field_size)
				level[i][j] = '+';
			else
				level[i][j] = ' ';
		}
	}
}

#endif
