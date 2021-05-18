#pragma once
#include "Vehicle.h"

class Hatchback : public Vehicle
{
	int doors = 5;
	double price = 2000;
	bool engine = true;
	int trunk = 30;

public:
	int vehicleNumberOfDoors();
	double vehiclePrice();
	bool vehicleEngineIsOn();
	int vehicleTrunkSize();
};