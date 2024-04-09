#pragma once
#include "MagicCreature.h"
#include <iostream>
#include <string>
class Horse : virtual public MagicCreature
{
private:
	std::string body = "Horse body"; // тело
	std::string head = "Horse head"; // голова
	std::string legs = "Horse legs"; // ноги
	std::string tail = "Horse tail"; // хвост

public:
	Horse();

	virtual std::string className();

	virtual ~Horse();

};

