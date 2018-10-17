#include "Animation.h"
#include"Idle.h"
Animation::Animation()
{
	m_current = new Idle();
}

Animation::~Animation()
{
}

void Animation::setCurrent(State * s)
{
	m_current = s;
}

void Animation::setPrevious(State * s)
{
	m_previous = s;
}

State * Animation::getCurrent()
{
	return m_current;
}

State * Animation::getPrevious()
{
	return m_previous;
}

void Animation::idle()
{
	theSprite->goToAnimation(0);
	m_current->idle(this);
}

void Animation::climbing()
{
	theSprite->goToAnimation(1);
	m_current->climbing(this);
}

void Animation::jumping()
{
	theSprite->goToAnimation(2);
	m_current->jumping(this);
}

void Animation::setSprite(AnimatedSprite & sprite)
{
	theSprite = &sprite;
}
