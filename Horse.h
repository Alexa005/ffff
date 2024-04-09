#pragma once
#include "MagicCreature.h"
#include <iostream>
#include <string>
class Horse : virtual public MagicCreature
{
private:
	std::string body = "Horse body"; // ����
	std::string head = "Horse head"; // ������
	std::string legs = "Horse legs"; // ����
	std::string tail = "Horse tail"; // �����

public:
	Horse();

	virtual std::string className();

	virtual ~Horse();

};

