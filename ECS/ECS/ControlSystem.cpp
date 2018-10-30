#include "ControlSystem.h"
#include<iostream>
ControlSystem::ControlSystem()
{
}

ControlSystem::~ControlSystem()
{
}

void ControlSystem::addEntity(Entity e)
{
	entities.push_back(e);
}

void ControlSystem::updateComponent(Component * c)
{
	for (Entity& e : entities)
	{
		PositionComponent * posComp = dynamic_cast<PositionComponent *>(c);
		if (posComp != nullptr)
		{
			
		}
	}
}

void ControlSystem::handleInput(SDL_Keycode key)
{
	for (Entity& e : entities)
	{
		for (Component * c : e.getComponents())
		{
			PositionComponent * posComp = dynamic_cast<PositionComponent *>(c);
			if (posComp != nullptr)
			{
				switch (key)
				{
				case SDLK_a:
					posComp->changeX(-5);
					break;
				case SDLK_d:
					posComp->changeX(5);
					break;
				case SDLK_w:
					posComp->changeY(-5);
					break;
				case SDLK_s:
					posComp->changeY(5);
					break;
				default:
					break;
				}
				
			}
		}
	}
}
