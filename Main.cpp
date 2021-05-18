#include <iostream>
#include "Sedan.h"
#include "Hatchback.h"

// Sedan salesperson
void sedanSalesperson(Vehicle* tWhat)
{
	tWhat->vehicleNumberOfDoors();
	tWhat->vehicleTrunkSize();
	tWhat->vehicleEngineIsOn();
}

// Sedan accountant
void sedanAccountant(Vehicle* tWhat)
{
	tWhat->vehiclePrice();
}

// Hatchback salesperson
void hatchbackSalesperson(Vehicle* tWhat)
{
	tWhat->vehicleNumberOfDoors();
	tWhat->vehicleTrunkSize();
	tWhat->vehicleEngineIsOn();
}

// Hatchback accountant
void hatchbackAccountant(Vehicle* tWhat)
{
	tWhat->vehiclePrice();
}

int main()
{
	Hatchback* tHatchback = new Hatchback;
	Sedan* tSedan = new Sedan;

	hatchbackSalesperson(tHatchback);
	hatchbackAccountant(tHatchback);
	std::cout << "-----------------------------" << std::endl;
	sedanSalesperson(tSedan);
	sedanAccountant(tSedan);


	delete tHatchback;
	delete tSedan;
}