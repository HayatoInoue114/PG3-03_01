#include "ClearScene.h"
#include <Novice.h>
#include "WindowSIze.h"

void ClearScene::Init() {
	inputManager_ = InputManager::GetInstance();
}

void ClearScene::Update() {
	if (inputManager_->ReleaseKey(DIK_SPACE)) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() {
	Novice::ScreenPrintf(kWindowWidth / 2, 50, "GameClear");
	Novice::ScreenPrintf(kWindowWidth / 2, 100,"Press SPACE");
}