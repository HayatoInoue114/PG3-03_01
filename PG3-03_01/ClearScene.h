#pragma once
#include "IScene.h"
#include "InputManager.h"

class ClearScene : public IScene
{
public:
	void Init() override;
	void Update() override;
	void Draw() override;
private:
	InputManager* inputManager_;
	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};

