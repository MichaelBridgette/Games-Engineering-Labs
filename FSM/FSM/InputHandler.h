#pragma once
#include"Command.h"
#include"ConcreteCommand.h"
#include"SDL.h"
#include<vector>
#include"Animation.h"

class InputHandler {
public:
	InputHandler(Animation *anime);
	void handleInput(SDL_Keycode keycode);

	void bindButton1();
	void bindButton2();
	void bindButton3();

	void bindAnimation(Animation *anime);
private:
	Command * Button1;
	Command * Button2;
	Command * Button3;

	std::vector<Command *> commands;
	Animation *anim;

};