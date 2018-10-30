#ifndef POSITIONSYSTEM
#define POSITIONSYSTEM

#include"System.h"
#include <vector>
#include"Entity.h"
#include"PositionComponent.h"
class PositionSystem : public System {
public:
	PositionSystem();
	~PositionSystem();
	void addEntity(Entity e) override;
	void updateComponent(Component * c) override;

private:
};

#endif // !POSITIONSYSTEM

