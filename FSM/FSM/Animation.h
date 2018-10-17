#ifndef ANIMATION_H
#define ANIMATION_H
#include"AnimatedSprite.h"
class Animation {

private:
	class State* m_current;

	class State* m_previous;

	AnimatedSprite * theSprite;

public:
	Animation();
	~Animation();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();

	void idle();
	void climbing();
	void jumping();

	void setSprite(AnimatedSprite &sprite);

};

#endif // !ANIMATION_H

