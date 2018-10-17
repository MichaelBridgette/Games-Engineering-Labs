#pragma once

#include"AnimatedSprite.h"
#include"Animation.h"
class Player {
public:
	Player(SDL_Renderer * r);
	void update();
	void draw();
	void handleInput(SDL_Keycode keycode);
private:

	Animation animation;
	AnimatedSprite * animatedSprite;
	SDL_Renderer * renderer;



	std::vector<const char *> names;
	std::vector<int> amountOfImages;
	std::vector<int> heights;
	std::vector<int> widths;
	std::vector<int>Xpos;
	std::vector<int>Ypos;

};