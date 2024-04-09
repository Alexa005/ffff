#include "MagicCreature.h"

MagicCreature::MagicCreature()
{
	std::cout << "Create MagicCreature:" << "\n\tMagic: " << magic << std::endl;
}

MagicCreature::~MagicCreature()
{
	std::cout << "Delete: MagicCreature\n";
}
