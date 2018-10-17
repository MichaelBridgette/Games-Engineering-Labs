#include "InputHandler.h"

InputHandler::InputHandler(Animation *anime)
{
	bindAnimation(anime);
	bindButton1();
	bindButton2();
	bindButton3();
}

void InputHandler::handleInput(SDL_Keycode keycode)
{
	switch (keycode)
	{
	case SDLK_1:
		Button1->execute();
		commands.push_back(Button1);
		break;
	case SDLK_2:
		Button2->execute();
		commands.push_back(Button2);
		break;
	case SDLK_3:
		Button3->execute();
		commands.push_back(Button3);
		break;
	default:
		break;
	}

}

void InputHandler::bindButton1()
{
	Button1 = new IdleCommand(anim);
}

void InputHandler::bindButton2()
{
	Button2 = new ClimbingCommand(anim);
}

void InputHandler::bindButton3()
{
	Button3 = new JumpingCommand(anim);
}

void InputHandler::bindAnimation(Animation *anime)
{
	anim = anime;
}
