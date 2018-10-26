#ifndef HEALTHSYSTEM_H
#define HEALTHSYSTEM_H



#include"Entity.h"
#include<vector>
#include"System.h"
class HealthSystem : public System
{
public:
	HealthSystem();
	~HealthSystem();
	void addEntity(Entity e) override;
	void updateComponent(Component * c) override;

private:
};
#endif // !HEALTHSYSTEM_H