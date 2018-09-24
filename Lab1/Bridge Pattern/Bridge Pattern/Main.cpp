#include<iostream>
#include"HandleToCharacter.h"
#include"DrawAPI.h"
#include"DrawImpl.h"
#include"Character.h"
#include"Player.h"
int main()
{

	//HandleToCharacter handle;
	//handle->Print();

	DrawAPI * api = new DrawImpl;
	Character * character = new Player(api);
	character->Draw();
	std::cin.get();
}