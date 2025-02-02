#include "RenderSystem.h"

RenderSystem::RenderSystem()
{
}

RenderSystem::~RenderSystem()
{
}

void RenderSystem::addEntity(Entity e)
{
	entities.push_back(e);
}

void RenderSystem::updateComponent(Component * c)
{
}

void RenderSystem::draw()
{
	for (Entity& e : entities)
	{
		for (Component * c : e.getComponents())
		{
			RenderComponent * rendComp = dynamic_cast<RenderComponent *>(c);
			if (rendComp != nullptr)
			{


				for (Component * c2 : e.getComponents())
				{
					PositionComponent * posComp = dynamic_cast<PositionComponent *>(c2);
					if (posComp != nullptr)
					{
						rendComp->draw((int)posComp->getPositionX(), (int)posComp->getPositionY());
					}
				}
				
			}
		}
	}
}
