#pragma once
#include"Command.h"
#include<iostream>

class IdleCommand : public Command {
public:
	IdleCommand(Animation *anim);
	virtual void execute();
	virtual void undo();
};

class ClimbingCommand : public Command {
public:
	ClimbingCommand(Animation *anim);
	virtual void execute();
	virtual void undo();
};

class JumpingCommand : public Command {
public:
	JumpingCommand(Animation * anim);
	virtual void execute();
	virtual void undo();
};

class MeleeCommand : public Command {
public:
	virtual void execute();
	virtual void undo();
};

class ShieldCommand : public Command {
public:
	virtual void execute();
	virtual void undo();
};