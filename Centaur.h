#pragma once
#include "Horse.h"
#include "Human.h"
class Centaur : public Horse, public Human, virtual public MagicCreature
{
private:
	std::string head = "Human head"; //голова
	std::string body = "Human body/Horse body"; //тело
	std::string legs = "Horse legs"; //ноги

public:
	Centaur();
	std::string className() override;
	~Centaur() override;
};

