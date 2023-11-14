#pragma once
#include "IScene.h"
#include "Player.h"
#include "Enemy.h"
#include "CollisionManager.h"

class StageScene : public IScene
{
public:
	void Init() override;
	void Update() override;
	void Draw() override;
private:

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
	// 宣言
	// 自機
	std::unique_ptr<Player> player_;

	// 敵
	std::unique_ptr<Enemy> enemy_;

	// 当たり判定
	std::unique_ptr<CollisionManager> collision_;
};

