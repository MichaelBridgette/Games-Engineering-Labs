#pragma once
#pragma once
#include<SDL.h>
#include<iostream>
#include<SDL_image.h>

#include"AnimatedSprite.h"
#include"Player.h"

//#include"InputHandler.h"
class Game {
public:
	Game();
	~Game();
	void Init(const char* title, int xPos, int yPos, int width, int height, bool fullScreen);

	void HandleEvents();
	void Update();
	void Draw();
	void Clean();

	bool Running();

private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;
	Player * player;
	//AnimatedSprite *sprite;

};