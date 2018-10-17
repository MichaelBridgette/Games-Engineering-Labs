
#ifndef STATE_H
#define STATE_H

#include<iostream>
#include"Animation.h"

class State {
public:
	virtual void handleInput(){}

	virtual void update(){}

	virtual void idle(Animation* a)
	{
		std::cout << "Idling" << std::endl;
	}
	virtual void jumping(Animation* a)
	{
		std::cout << "Jump" << std::endl;
	}
	virtual void climbing(Animation* a)
	{
		std::cout << "Climbing" << std::endl;
	}
};


#endif // !STATE_H
