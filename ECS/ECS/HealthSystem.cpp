#include "HealthSystem.h"
#include"HealthComponent.h"
#include"Component.h"
#include<iostream>
HealthSystem::HealthSystem()
{
}

HealthSystem::~HealthSystem()
{
}

void HealthSystem::addEntity(Entity e)
{
	entities.push_back(e);
}

void HealthSystem::updateComponent(Component * c)
{

	for (Entity& e : entities)
	{
		HealthComponent * healthComp = dynamic_cast<HealthComponent *>(c);
		if (healthComp != nullptr)
		{
			int health = healthComp->getHealth();
			//std::cout << health << std::endl;
			health--;
			healthComp->setHealth(health);
			

		}
	}

}
