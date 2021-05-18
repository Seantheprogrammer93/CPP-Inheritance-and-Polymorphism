#include "Sedan.h"

int Sedan::vehicleTrunkSize()
{
	std::cout << "Sedan trunk size: " << trunk << std::endl;
	return trunk;
}

double Sedan::vehiclePrice()
{
	std::cout << "Sedan price: " << price << std::endl;
	return price;
}

int Sedan::vehicleNumberOfDoors()
{
	std::cout << "Sedan door count: " << doors << std::endl;
	return doors;
}

bool Sedan::vehicleEngineIsOn()
{
	if (engine == true)
	{
		std::cout << "Sedan engine is on!" << std::endl;
	}
	else
	{
		std::cout << "Sedan engine is off!" << std::endl;
	}
	return engine;
}