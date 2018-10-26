#ifndef HEALTHCOMPONENT_H
#define HEALTHCOMPONENT_H




#include"Component.h"

class HealthComponent: public Component {
public:
	HealthComponent();

	int getHealth();
	void setHealth(int health);
private:
	int health;
};

#endif // !HEALTHCOMPONENT_H