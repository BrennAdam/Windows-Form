#pragma once

class Enemy
{

public:
	enum state 
	{
		PATHING, 
		PURSUE, 
		ATTACKING
	}currentState;

	enum loot
	{
		NONE,
		ARMOUR,
		WEAPON,
		FOOD,
		GOLD
	}hasLoot;

	float attackPower = 0;
	float health = 0;
	float armour = 0;
	char phrase;
	bool render; 

	Enemy()
	{
		//create object *contructor*
	}
	
	~Enemy()
	{
		//destroy object *deconstructor*
	}

};