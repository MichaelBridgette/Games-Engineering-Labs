#include<SDL.h>
#include"Game.h"

Game *game = nullptr;
int main(int argc, char* argv[])
{
	game = new Game();
	game->Init("ECS", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
	while (game->Running())
	{
		game->HandleEvents();
		game->Update();
		game->Draw();
	}
	game->Clean();
	return 0;
}