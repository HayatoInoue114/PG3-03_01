#include "TitleScene.h"
#include "WindowSIze.h"

void TitleScene::Init() {
	inputManager_ = InputManager::GetInstance();
}

void TitleScene::Update() {
	if (inputManager_->ReleaseKey(DIK_SPACE)) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(kWindowWidth / 2, 50, "Title");
	Novice::ScreenPrintf(kWindowWidth / 2, 100, "Press SPACE");
}