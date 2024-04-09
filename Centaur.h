#pragma once
#include "Horse.h"
#include "Human.h"
class Centaur : public Horse, public Human, virtual public MagicCreature
{
private:
	std::string head = "Human head"; //������
	std::string body = "Human body/Horse body"; //����
	std::string legs = "Horse legs"; //����

public:
	Centaur();
	std::string className() override;
	~Centaur() override;
};

