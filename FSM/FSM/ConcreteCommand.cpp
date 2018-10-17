#include "ConcreteCommand.h"

IdleCommand::IdleCommand(Animation * anim): Command()
{
	animation = anim;
}

void IdleCommand::execute()
{
	std::cout << "Idle Command" << std::endl;
	animation->idle();
}

void IdleCommand::undo()
{
	std::cout << "Idle Undone" << std::endl;
}

ClimbingCommand::ClimbingCommand(Animation * anim): Command()
{
	animation = anim;
}

void ClimbingCommand::execute()
{
	std::cout << "Climbing Command" << std::endl;
	animation->climbing();
}

void ClimbingCommand::undo()
{
	std::cout << "Climbing Undone" << std::endl;
}

JumpingCommand::JumpingCommand(Animation * anim): Command()
{
	animation = anim;
}

void JumpingCommand::execute()
{
	std::cout << "Jumping Command" << std::endl;
	animation->jumping();
}

void JumpingCommand::undo()
{
	std::cout << "Jumping Undone" << std::endl;
}

void MeleeCommand::execute()
{
	std::cout << "Melee Command" << std::endl;
}

void MeleeCommand::undo()
{
	std::cout << "Melee Undone" << std::endl;
}

void ShieldCommand::execute()
{
	std::cout << "Shield Command" << std::endl;
}

void ShieldCommand::undo()
{
	std::cout << "Shield Undone" << std::endl;
}
