#include "StageScene.h"
#include <Novice.h>

void StageScene::Init() {

	// 自機
	player_ = std::make_unique<Player>();
	player_->Initialize();

	// 敵
	enemy_ = std::make_unique<Enemy>();
	enemy_->Initialize();

	// 当たり判定
	collision_ = std::make_unique<CollisionManager>();
	collision_->Initialize(player_.get(), enemy_.get());
}

void StageScene::Update() {
	player_->Update();

	enemy_->Update();

	collision_->CheckOnCollision();

	// 敵が死んだらクリア
	if (!enemy_->GetIsAlive()) {
		sceneNo = CLEAR;
	}
}

void StageScene::Draw() {
	player_->Draw();

	enemy_->Draw();

	Novice::ScreenPrintf(0, 10, "SPACE:Shot  WASD:Move");
}