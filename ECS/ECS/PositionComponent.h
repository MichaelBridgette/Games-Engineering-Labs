#ifndef POSITIONCOMPONENT
#define POSITIONCOMPONENT

#include"Component.h"

class PositionComponent: public Component  {
public:
	PositionComponent();
	PositionComponent(float x, float y);
	void setPosition(float x, float y);
	void changeX(float amount);
	void changeY(float amount);
	float getPositionX();
	float getPositionY();
private:
	float xPos;
	float yPos;

};

#endif // !POSITIONCOMPONENT

