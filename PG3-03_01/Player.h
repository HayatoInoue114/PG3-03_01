#pragma once
#include "Vector2.h"
#include "PlayerBullet.h"
#include "Enemy.h"
#include <memory>
#include "InputManager.h"

class Player
{
public:
	void Initialize();

	void Update();

	void Draw();

	Vector2 GetPosition() { return position_; }

	bool GetIsShot() { return isShot_; }

	float GetRadius() { return radius_; }

	PlayerBullet bullet_;

	//キーごとにコマンドを作る
	void MoveRight();

	void MoveLeft();
private:
	InputManager* inputManager_;

	// 座標
	Vector2 position_{};
	// 速度
	Vector2 velocity_{};
	// 半径
	float radius_{};
	// 発射フラグ
	bool isShot_{};
	// 色
	int color_{};

	const float kSpeed = 4.0f;

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};

