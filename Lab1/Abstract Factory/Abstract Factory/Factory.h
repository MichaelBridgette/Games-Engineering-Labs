#pragma once
#include"Character.h"
#include<iostream>

class Factory {
public:
	virtual Character * CreatePlayer() = 0;
	virtual Character * CreateOpponent() = 0;
};