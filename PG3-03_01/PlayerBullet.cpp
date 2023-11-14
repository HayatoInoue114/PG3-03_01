#include "PlayerBullet.h"
#include "Novice.h"
#include "WindowSIze.h"

void PlayerBullet::Initialize() {
	position_ = { kWindowWidth / 2, kWindowWidth / 2 };

	velocity_ = { 0, kSpeed };

	radius_ = 16.0f;

	isAlive_ = false;

	color_ = WHITE;
}

void PlayerBullet::Update() {
	position_.y -= velocity_.y;
	// 画面外で消える
	if (0 >= position_.y - radius_) {
		isAlive_ = false;
	}
}

void PlayerBullet::Draw() {
	if (isAlive_) {
		Novice::DrawEllipse(position_.x, position_.y, radius_, radius_, 0.0f, color_, kFillModeSolid);
	}
}