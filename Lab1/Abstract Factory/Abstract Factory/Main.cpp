#include<iostream>
#include"Factory.h"
#include"CharacterFactory.h"
#include"Character.h"
#include<vector>
int main()
{
	Factory * factory = new CharacterFactory;
	std::vector<Character *> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponent());

	for (int i = 0; i < characters.size(); i++)
	{
		characters.at(i)->Draw();
	}
	system("PAUSE");
}