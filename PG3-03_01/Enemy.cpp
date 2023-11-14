#include "Enemy.h"
#include "WindowSIze.h"
#include <Novice.h>

void Enemy::Initialize() {
	position_ = { kWindowWidth / 2 ,100 };

	velocity_ = { 3.0f ,0 };

	radius_ = 32.0f;

	isAlive_ = true;

	color_ = RED;
}

void Enemy::Update() {
	// 移動
	position_.x += velocity_.x;
	position_.y += velocity_.y;

	// 画面端で跳ね返る
	if (position_.x - radius_ <= 0 || position_.x + radius_ >= 1280) {
		velocity_.x *= -1;
	}
	if (position_.y - radius_ <= 0 || position_.y + radius_ >= 720) {
		velocity_.y *= -1;
	}
}

void Enemy::Draw() {
	if (isAlive_) {
		Novice::DrawEllipse(position_.x, position_.y, radius_, radius_, 0.0f, color_, kFillModeSolid);
	}
}