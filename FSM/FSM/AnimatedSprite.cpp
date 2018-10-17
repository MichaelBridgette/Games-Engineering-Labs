#include "AnimatedSprite.h"

AnimatedSprite::AnimatedSprite(const char * imageSrc, int noOfImages, int width, int height, SDL_Renderer * renderer, int xPos, int yPos, std::vector<const char *> sprites, std::vector<int>images, std::vector<int> xCoords, std::vector<int> yCoords, std::vector<int> theWidths, std::vector<int> theHeights)
{
	m_width = width;
	m_height = height;
	m_posX = xPos;
	m_posY = yPos;
	m_images = noOfImages;

	names = sprites;
	amountOfImages = images;
	Xpos = xCoords;
	Ypos = yCoords;
	widths = theWidths;
	heights = theHeights;

	m_renderer = renderer;
	srcrect = { 0, 0, m_width, m_height };
	dstrect = { m_posX, m_posY, m_width, m_height };
	image = IMG_Load(imageSrc);
	texture = SDL_CreateTextureFromSurface(m_renderer, image);

	if (!texture)
	{
		std::cout << imageSrc <<" texture failed to load!" << std::endl;
	}
}

void AnimatedSprite::update()
{
	ticks = SDL_GetTicks();
	seconds = ticks / 75;
	sprite = seconds % m_images;
	srcrect = { (int)sprite * m_width, 0, m_width, m_height };
}

void AnimatedSprite::draw()
{
	SDL_RenderCopy(m_renderer, texture, &srcrect, &dstrect);
}

void AnimatedSprite::updateImage(const char * imageSrc, int noOfImages, int width, int height,int xPos, int yPos)
{
	clean();
	m_width = width;
	m_height = height;
	m_posX = xPos;
	m_posY = yPos;
	m_images = noOfImages;
	srcrect = { 0, 0, m_width, m_height };
	dstrect = { m_posX, m_posY, m_width, m_height };
	image = IMG_Load(imageSrc);
	texture = SDL_CreateTextureFromSurface(m_renderer, image);

	if (!texture)
	{
		std::cout << imageSrc << " texture failed to load!" << std::endl;
	}
}

void AnimatedSprite::goToAnimation(int index)
{
	clean();
	m_width = widths.at(index);
	m_height = heights.at(index);
	m_posX = Xpos.at(index);
	m_posY = Ypos.at(index);
	m_images = amountOfImages.at(index);
	srcrect = { 0, 0, m_width, m_height };
	dstrect = { m_posX, m_posY, m_width, m_height };
	image = IMG_Load(names.at(index));
	texture = SDL_CreateTextureFromSurface(m_renderer, image);

	if (!texture)
	{
		std::cout << names.at(index) << " texture failed to load!" << std::endl;
	}
}

void AnimatedSprite::clean()
{
	SDL_DestroyTexture(texture);
	SDL_FreeSurface(image);
}
