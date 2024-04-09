#include "Pegasus.h"

Pegasus::Pegasus()
{
	std::cout << "Create Pegasus:" 
	//<< "\n\tHead: " << head << "\n\tBody: " << body << "\n\tLegs: " << legs << "\n\tTail: " << tail 
	<< "\n\tWings:" << wings << std::endl;
}

std::string Pegasus::className()
{
	return std::string("Pegasus");
}

Pegasus::~Pegasus()
{
	std::cout << "Delete: Pegasus\n";
}


