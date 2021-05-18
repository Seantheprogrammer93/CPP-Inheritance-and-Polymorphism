#pragma once
#include "Vehicle.h"

class Sedan : public Vehicle
{
	int doors = 4;
	double price = 1000;
	bool engine = true;
	int trunk = 20;

public:
	int vehicleNumberOfDoors();
	double vehiclePrice();
	bool vehicleEngineIsOn();
	int vehicleTrunkSize();
};