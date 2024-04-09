#pragma once
#include "MagicCreature.h"
#include <iostream>
#include <string>
class Human : virtual public MagicCreature
{
private:
	std::string body = "Human body"; // тело
	std::string head = "Human head"; // голова
	std::string hands = "Human hands"; // руки
	std::string legs = "Human legs"; // ноги

public:
	Human();
	virtual std::string className();
	virtual ~Human();
};

