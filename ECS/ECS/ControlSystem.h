#ifndef CONTROLSYSTEM
#define CONTROLSYSTEM

#include"Component.h"
#include"ControlComponent.h"
#include"Entity.h"
#include"PositionComponent.h"
#include"System.h"
#include<SDL.h>
class ControlSystem : public System {
public:
	ControlSystem();
	~ControlSystem();
	void addEntity(Entity e) override;
	void updateComponent(Component * c) override;

	void handleInput(SDL_Keycode key);
private:
};


#endif // !CONTROLSYSTEM

