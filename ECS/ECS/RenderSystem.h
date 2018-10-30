#ifndef RENDERSYSTEM
#define RENDERSYSTEM

#include<iostream>
#include"System.h"
#include"RenderComponent.h"
#include"Entity.h"
#include"PositionComponent.h"


class RenderSystem : public System {
public:
	RenderSystem();
	~RenderSystem();
	void addEntity(Entity e) override;
	void updateComponent(Component * c) override;
	void draw();
private:
};

#endif // !RENDERSYSTEM

