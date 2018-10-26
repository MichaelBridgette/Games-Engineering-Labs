#pragma once
#include<SDL.h>
#include<iostream>
#include"Entity.h"
#include"Component.h"
#include"HealthSystem.h"
#include"HealthComponent.h"
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

	Entity player;
	//HealthComponent * healthComp;
	HealthSystem healthSystem;
};