#pragma once
#include "Horse.h"
class Pegasus : public Horse
{
private:
	std::string wings = "Pegasus wings"; //������

public:
	Pegasus();
	std::string className() override;
	~Pegasus() override;
};

