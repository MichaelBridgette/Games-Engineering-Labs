#ifndef ENTITY_H
#define ENTITY_H




#include<vector>
#include"Component.h"
class Entity {
public:
	int id;
	Entity() {};
	void addComponent(Component * c) { components.push_back(c); };
	std::vector<Component *> getComponents() { return components; };

private:
	std::vector<Component * > components;
};
#endif // !ENTITY_H