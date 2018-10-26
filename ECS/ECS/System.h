#ifndef SYSTEM_H
#define SYSTEM_H



#include"Component.h"
#include"Entity.h"
#include<vector>
class System {
public:
	System();
	virtual ~System();

	void update();
	virtual void updateComponent(Component * c);
	virtual void addEntity(Entity e);
private:

protected:
	std::vector<Entity> entities;
};
#endif // !SYSTEM_H