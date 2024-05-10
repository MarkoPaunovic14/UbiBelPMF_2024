#pragma once

#include "core/system.h"
#include "core/core.h"

using namespace dagger;

namespace dead_end
{
	struct Player
	{
		int health{ 100 };
		int maxHealth{ 100 };
		Float32 speed;
		int weaponType{ 1 }; // 1 - pistol, 2 - gun
		bool isPlayer{ true };
	};

	class PlayerSystem
		: public System
	{
	public:

		inline String SystemName() { return "Player System"; }

		void Run() override;
	};
}
