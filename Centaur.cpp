#include "Centaur.h"

Centaur::Centaur()
{
	std::cout << "Create Centaur:" << "\n\tHead: " << head << "\n\tBody: " << body << "\n\tLegs: " << legs << std::endl;
}

std::string Centaur::className()
{
	return std::string("Centaur");
}

Centaur::~Centaur()
{
	std::cout << "Delete: Centaur\n";
}
