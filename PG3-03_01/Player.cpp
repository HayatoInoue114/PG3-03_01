#include "Player.h"
#include "WindowSIze.h"
#include <Novice.h>

void Player::Initialize() {
	inputManager_ = InputManager::GetInstance();

	position_ = { kWindowWidth / 2, kWindowWidth / 2 };

	velocity_ = { kSpeed, kSpeed };

	radius_ = 16;

	isShot_ = false;

	color_ = BLUE;

	// 弾
	bullet_.Initialize();

	bullet_.SetPos(position_);
}

void Player::Update() {
	//移動
	if (inputManager_->PressKey(DIK_W)) {
		position_.y -= velocity_.y;
	}
	if (inputManager_->PressKey(DIK_S)) {
		position_.y += velocity_.y;
	}
	if (inputManager_->PressKey(DIK_D)) {
		position_.x += velocity_.x;
	}
	if (inputManager_->PressKey(DIK_A)) {
		position_.x -= velocity_.x;
	}

	//発射
	if (inputManager_->ReleaseKey(DIK_SPACE)) {
		isShot_ = true;
	}
	if (isShot_) {
		bullet_.SetIsAlive(true);
		isShot_ = false;
	}


	if (bullet_.GetIsAlive()) {
		bullet_.Update();
	}
	else {
		bullet_.SetPos(position_);
	}
}

void Player::Draw() {
	//自機
	Novice::DrawEllipse(position_.x, position_.y, radius_, radius_, 0.0f, color_, kFillModeSolid);
	//弾
	bullet_.Draw();
}