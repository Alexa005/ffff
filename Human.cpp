#include "Human.h"

Human::Human()
{
	std::cout << "Create Human:" << "\n\tBody: " << body << "\n\tHead: " << head << "\n\tHands: " << hands << "\n\tLegs: " << legs  << std::endl;
}

std::string Human::className()
{
	return std::string("Human");
}
 
Human::~Human() 
{
	std::cout << "Delete: Human\n";
}
