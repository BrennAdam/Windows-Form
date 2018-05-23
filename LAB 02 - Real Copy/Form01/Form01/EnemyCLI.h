#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;


[Serializable]
ref class EnemyCLI
{
	public:
		enum class state
		{
			PATHING,
			PURSUE,
			ATTACKING
		};

		enum class loot
		{
			NONE,
			ARMOUR,
			WEAPON,
			FOOD,
			GOLD
		};

		EnemyCLI();


		~EnemyCLI()
		{}
		

		property float ATT
		{
			float get()
			{
				return attackPower;
			}
			void set(float newattackPower)
			{
				attackPower = newattackPower;
			}
		};
		property float HP
		{
			float get()
			{
				return health;
			}
			void set(float newHealth)
			{
				health = newHealth;
			}
		};
		property float DEF
		{
			float get()
			{
				return armour;
			}
			void set(float newArmour)
			{
				armour = newArmour;
			}
		};
		property bool eRender
		{
			bool get()
			{
				return render;
			}
			void set(bool newRender)
			{
				render = newRender;
			}
		};
		property String^ ePhrase
		{
			String^ get()
			{
				return phrase;
			}
			void set(String^ newPhrase)
			{
				phrase = newPhrase;
			}
		};
		property String^ eName
		{
			String^ get()
			{
				return name;
			}
			void set(String^ newName)
			{
				name = newName;
			}
		};
		property state eState
		{
			state get()
			{
				return currentState;
			}
			void set(state newCurrentState)
			{
				currentState = newCurrentState;
			}
		};
		property loot eLoot
		{
			loot get()
			{
				return hasLoot;
			}
			void set(loot newHasLoot)
			{
				hasLoot = newHasLoot;
			}
		};

	private:
		float attackPower = 0;
		float health = 0;
		float armour = 0;
		bool render;
		String^ name;
		String^ phrase;
		state currentState;
		loot hasLoot;
		
};

