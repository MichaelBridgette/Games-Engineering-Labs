#include "game.h"

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
		//sprite = new AnimatedSprite("SonicWalk.png",10,102,110,renderer,350,350);
		player = new Player(renderer);
	}
	else
	{
		std::cout << IMG_GetError() << std::endl;
	}

	
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
		player->handleInput(event.key.keysym.sym);
		break;
	}

}

void Game::Update()
{
	player->update();
}

void Game::Draw()
{
	SDL_RenderClear(renderer);
	//this is where we draw stuff
	player->draw();
	SDL_RenderPresent(renderer);
}

void Game::Clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	//sprite->clean();
	IMG_Quit();
	SDL_Quit();
	std::cout << "Game cleaned!" << std::endl;
}

bool Game::Running()
{
	return isRunning;
}
