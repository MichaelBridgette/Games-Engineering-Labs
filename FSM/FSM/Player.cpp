#include "Player.h"
#include"Idle.h"
Player::Player(SDL_Renderer * r)
{
	renderer = r;
	animation.setCurrent(new Idle());
	animation.setPrevious(new Idle());
	


	names.push_back("SonicWalk.png");
	names.push_back("SonicSpin.png");
	names.push_back("SonicSprint.png");

	amountOfImages.push_back(10);
	amountOfImages.push_back(9);
	amountOfImages.push_back(4);

	widths.push_back(102);
	widths.push_back(102);
	widths.push_back(105);

	heights.push_back(110);
	heights.push_back(86);
	heights.push_back(97);

	Xpos.push_back(350);
	Xpos.push_back(350);
	Xpos.push_back(350);

	Ypos.push_back(350);
	Ypos.push_back(350);
	Ypos.push_back(350);

	animatedSprite = new AnimatedSprite("SonicWalk.png", 10, 102, 110,
										renderer, 350, 350,names,amountOfImages,
										Xpos,Ypos,widths,heights);
	animation.setSprite(*animatedSprite);

	handler = new InputHandler(&animation);
}

void Player::update()
{
	animatedSprite->update();
}

void Player::draw()
{
	animatedSprite->draw();
}

void Player::handleInput(SDL_Keycode keycode)
{
	handler->handleInput(keycode);
}
