#pragma once
#include "Player.h"
#include "Enemy.h"
#include <memory>

class CollisionManager
{
public:
	void Initialize(Player* player, Enemy* enemy);

	void CheckOnCollision();

private:
	Player* player_;

	Enemy* enemy_;
};