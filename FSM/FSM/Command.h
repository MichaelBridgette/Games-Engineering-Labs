#pragma once
#include<functional>
#include"Animation.h"
class Command {
public:
	virtual ~Command();
	virtual void execute() = 0;
	virtual void undo() = 0;
protected:
	Command();
	Animation * animation;
};