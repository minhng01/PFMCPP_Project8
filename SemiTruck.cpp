#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }

SemiTruck::~SemiTruck() = default;

SemiTruck::SemiTruck(const SemiTruck&) = default;

SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << "Truck: Pull over.\n";
}

void SemiTruck::getSpeed(int speed)
{
    if (speed > 65)
        std::cout << "Truck: Over speed limit! Slowing down.\n";
    else
        std::cout << "Truck: Good to go.\n";
}
