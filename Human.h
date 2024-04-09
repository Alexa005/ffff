#pragma once
#include "MagicCreature.h"
#include <iostream>
#include <string>
class Human : virtual public MagicCreature
{
private:
	std::string body = "Human body"; // ����
	std::string head = "Human head"; // ������
	std::string hands = "Human hands"; // ����
	std::string legs = "Human legs"; // ����

public:
	Human();
	virtual std::string className();
	virtual ~Human();
};

