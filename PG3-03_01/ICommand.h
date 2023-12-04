#pragma once
#include <Player.h>

class ICommand
{
public:
	//virtual ~ICommand() = 0;
	virtual void Exec(Player& player) = 0;
};

