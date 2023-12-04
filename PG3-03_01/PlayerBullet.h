#pragma once
#include "Vector2.h"

class PlayerBullet
{
public:

	void Initialize();

	void Update();

	void Draw();

	Vector2 GetPosition() { return position_; }

	float GetRadius() { return radius_; }

	bool GetIsAlive() { return isAlive_; }

	void SetIsAlive(bool isAlive) { isAlive_ = isAlive; }

	void SetPos(Vector2 position) { position_ = position; }

private:
	Vector2 position_{};
	Vector2 velocity_{};
	const float kSpeed = 5.0f;
	float radius_{};
	bool isAlive_{};
	int color_{};
};

