#include "PositionSystem.h"
#include<iostream>
PositionSystem::PositionSystem()
{
}

PositionSystem::~PositionSystem()
{
}

void PositionSystem::addEntity(Entity e)
{
	entities.push_back(e);
}

void PositionSystem::updateComponent(Component * c)
{
	for (Entity& e : entities)
	{
		PositionComponent * posComp = dynamic_cast<PositionComponent *>(c);
		if (posComp != nullptr)
		{
			//std::cout << "Position: " << posComp->getPositionX() << ","
			//	<< posComp->getPositionY() << std::endl;
		}
	}
}
