#include "Horse.h"

Horse::Horse()
{
	std::cout << "Create Horse:" << "\n\tHead: " << head << "\n\tBody: " << body << "\n\tLegs: " << legs << "\n\tTail: " << tail << std::endl;
}

std::string Horse::className()
{
	return std::string("Horse");
}

Horse::~Horse() 
{
	std::cout << "Delete: Horse" << std::endl;
}
