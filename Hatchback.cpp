#include "Hatchback.h"

int Hatchback::vehicleTrunkSize()
{
	std::cout << "Hatchback trunk size: " << trunk << std::endl;
	return trunk;
}

double Hatchback::vehiclePrice()
{
	std::cout << "Hatchback price: " << price << std::endl;
	return price;
}

int Hatchback::vehicleNumberOfDoors()
{
	std::cout << "Hatchback door count: " << doors << std::endl;
	return doors;
}

bool Hatchback::vehicleEngineIsOn()
{
	if (engine == true) 
	{
		std::cout << "Hatchback engine is on!" << std::endl;
	}
	else 
	{
		std::cout << "Hatchback engine is off!" << std::endl;
	}
	return engine;
}