#pragma once
#include <iostream>

class Vehicle
{
public:
	// Sedan and Hatchback both have a price.
	virtual double vehiclePrice() = 0;

	// Sedan and Hatchback both have doors.
	virtual int vehicleNumberOfDoors() = 0;

	// Sedan and Hatchback both have a trunk.
	virtual int vehicleTrunkSize() = 0;

	// Sedan and Hatchback can be started.
	virtual bool vehicleEngineIsOn() = 0;
};