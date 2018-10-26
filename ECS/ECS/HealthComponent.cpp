#include "HealthComponent.h"

HealthComponent::HealthComponent(): health(100)
{
}

int HealthComponent::getHealth()
{
	return health;
}

void HealthComponent::setHealth(int health)
{
	this->health = health;
	if (this->health < 0)
	{
		this->health = 0;
	}
}
