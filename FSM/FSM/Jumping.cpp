#include "Jumping.h"
#include"Idle.h"
#include"Climbing.h"
void Jumping::idle(Animation * a)
{
	std::cout << "Jumping-> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation * a)
{
	std::cout << "Jumping-> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
