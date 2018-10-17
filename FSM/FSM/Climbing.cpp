#include "Climbing.h"
#include"Jumping.h"
#include"Idle.h"

void Climbing::idle(Animation * a)
{
	std::cout << "Climbing-> idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::jumping(Animation * a)
{
	std::cout << "Climbing-> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
