#pragma once
#include<iostream>
#include"Character.h"
#include"Factory.h"
#include "Player.h"
#include "Boss.h"

class CharacterFactory: public Factory {
public: 
	Character * CreatePlayer() {
		return new Player;
	}
	Character * CreateOpponent() {
		return new Boss;
	}
};