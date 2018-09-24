#pragma once
#include"Character.h"
#include<iostream>
class Player : public Character {
public:
	void Draw() {
		std::cout << "Draw Player" << std::endl;
	}
private:
};