#include "AiSystem.h"
#include<iostream>
#include <stdio.h> 
#include <stdlib.h>  
#include<time.h>
AiSystem::AiSystem()
{
	srand(time(NULL));
	
	if (rand() % 1 - 0 == 1)
	{
		moveRight = true;
		speed = 0.01;
	}
	else
	{
		moveRight = false;
		speed = -0.01;
	}
}

AiSystem::~AiSystem()
{
}

void AiSystem::addEntity(Entity e)
{
	entities.push_back(e);
}

void AiSystem::updateComponent(Component * c)
{
	for (Entity& e : entities)
	{
		PositionComponent * posComp = dynamic_cast<PositionComponent *>(c);
		if (posComp != nullptr)
		{
			if (posComp->getPositionX() <= 0)
			{
				moveRight = true;
				speed = 0.01;
			}
			else if (posComp->getPositionX() >= 500)
			{
				moveRight = false;
				speed = -0.01;
			}

				posComp->changeX(speed);
		}
	}
}
