#include "PositionComponent.h"

PositionComponent::PositionComponent()
{
	xPos = 0;
	yPos = 0;
}

PositionComponent::PositionComponent(float x, float y)
{
	xPos = x;
	yPos = y;
}

void PositionComponent::setPosition(float x, float y)
{
	xPos = x;
	yPos = y;
}

void PositionComponent::changeX(float amount)
{
	xPos += amount;
}

void PositionComponent::changeY(float amount)
{
	yPos += amount;
}

float PositionComponent::getPositionX()
{
	return xPos;
}

float PositionComponent::getPositionY()
{
	return yPos;
}
