#pragma once
#include <Novice.h>

class InputManager
{
public:
	static InputManager* GetInstance();

	InputManager() = default;

	void Update();

	bool TriggerKey(BYTE keyNumber);

	bool PressKey(BYTE keyNumber);

	bool ReleaseKey(BYTE keyNumber);

private:
	char keys_[256] = { 0 };
	char preKeys_[256] = { 0 };
};

