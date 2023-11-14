#pragma once
#include "Vector2.h"

class Enemy
{
public:
	void Initialize();

	void Update();

	void Draw();

	Vector2 GetPosition() { return position_; }

	bool GetIsAlive() { return isAlive_; }

	float GetRadius() { return radius_; }

	void SetIsAlive(bool isAlive) { isAlive_ = isAlive; }

private:
	// 座標
	Vector2 position_{};
	// 速度
	Vector2 velocity_{};
	// 半径
	float radius_{};
	// 生存フラグ
	bool isAlive_{};
	// 色
	int color_{};
};

