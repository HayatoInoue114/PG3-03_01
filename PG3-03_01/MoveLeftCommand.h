#pragma once
#include "ICommand.h"

class Player;

class MoveLeftCommand : public ICommand
{
public:
	void Exec(Player& player) override;
};

