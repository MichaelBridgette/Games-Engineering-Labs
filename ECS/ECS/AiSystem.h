#ifndef AISYSTEM
#define AISYSTEM

#include"System.h"
#include"Entity.h"
#include"PositionComponent.h"

class AiSystem: public System {

public:
	AiSystem();
	~AiSystem();
	void addEntity(Entity e) override;
	void updateComponent(Component * c) override;
private:
	bool moveRight;
	float speed;
};

#endif // !AISYSTEM

