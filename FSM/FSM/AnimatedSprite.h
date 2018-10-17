#pragma once
#include<SDL.h>
#include<SDL_image.h>
#include<string>
#include<iostream>
#include<vector>
class AnimatedSprite {
public:
	AnimatedSprite(const char * imageSrc, int noOfImages, int x, int y, SDL_Renderer * renderer, int xPos, int yPos,std::vector<const char *> sprites, std::vector<int>images, std::vector<int> xCoords, std::vector<int> yCoords, std::vector<int> theWidths, std::vector<int> theHeights);

	void update();
	void draw();

	void updateImage(const char * imageSrc, int noOfImages, int x, int y, int xPos, int yPos);

	void goToAnimation(int index);

	void clean();
private:

	SDL_Renderer * m_renderer;

	SDL_Surface * image;
	SDL_Texture * texture;
	SDL_Rect srcrect;
	SDL_Rect dstrect;

	Uint32 ticks;
	Uint32 seconds;
	Uint32 sprite;

	int m_width;
	int m_height;
	int m_images;
	int m_posX;
	int m_posY;

	std::vector<const char *> names;
	std::vector<int> amountOfImages;
	std::vector<int> heights;
	std::vector<int> widths;
	std::vector<int>Xpos;
	std::vector<int>Ypos;


};