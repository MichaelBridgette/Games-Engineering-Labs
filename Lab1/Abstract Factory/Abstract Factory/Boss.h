#pragma once
#include<iostream>
#include"Character.h"

class Boss : public Character {
public:
	void Draw() {
		std::cout << "Draw Boss" << std::endl;
	}
private:
};