#pragma once

class Character {
public:
	Character() {};
	virtual ~Character() {};
	virtual void Draw() = 0;
private:
};