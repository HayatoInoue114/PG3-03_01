#include "CollisionManager.h"

void CollisionManager::Initialize(Player* player, Enemy* enemy) {
	player_ = player;
	enemy_ = enemy;
}

void CollisionManager::CheckOnCollision() {
	Vector2 enemyToBullet = {
		enemy_->GetPosition().x - player_->bullet_.GetPosition().x,
		enemy_->GetPosition().y - player_->bullet_.GetPosition().y
	};

	float compare = enemy_->GetRadius() + player_->bullet_.GetRadius();
	
	float distance = (enemyToBullet.x * enemyToBullet.x) + (enemyToBullet.y * enemyToBullet.y);

	if (distance <= compare * compare) {
		player_->bullet_.SetIsAlive(false);
		enemy_->SetIsAlive(false);
	}
}