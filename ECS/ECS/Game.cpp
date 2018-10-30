#include "Game.h"
#include<iostream>

Game::Game()
{
}

Game::~Game()
{
}

void Game::Init(const char * title, int xPos, int yPos, int width, int height, bool fullScreen)
{
	int flags = 0;

	if (fullScreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{


		std::cout << "Subsystems initialised!" << std::endl;

		window = SDL_CreateWindow(title, xPos, yPos, width, height, flags);
		if (window)
		{
			std::cout << "Window created!" << std::endl;
		}
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 168, 230, 255, 255);
			std::cout << "Renderer created!" << std::endl;


		}
		isRunning = true;
	}
	else {
		isRunning = false;
	}
	if (!IMG_Init(IMG_INIT_PNG) == 0)
	{

	}
	else
	{
		std::cout << IMG_GetError() << std::endl;
	}

	player.addComponent(new HealthComponent());
	player.addComponent(new PositionComponent(150,150));
	player.addComponent(new RenderComponent("square.png", 64, 64, renderer));
	healthSystem.addEntity(player);
	positionSystem.addEntity(player);
	controlSystem.addEntity(player);
	renderSystem.addEntity(player);
}

void Game::HandleEvents()
{
	SDL_Event event;

	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;

	case SDL_KEYDOWN:
		//handler.handleInput(event.key.keysym.sym);
		controlSystem.handleInput(event.key.keysym.sym);
		break;
	}

}

void Game::Update()
{
	system("cls");
	healthSystem.update();
	positionSystem.update();
}

void Game::Draw()
{
	SDL_RenderClear(renderer);
	//this is where we draw stuff
	renderSystem.draw();
	SDL_RenderPresent(renderer);
}

void Game::Clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Game cleaned!" << std::endl;
}

bool Game::Running()
{
	return isRunning;
}
