#include "ElectricEngine.hpp"
#include <iostream>

ElectricEngine::ElectricEngine(Power power, ElectricCapacity batteryCapacity)
    : Engine(power)
    , batteryCapacity_(batteryCapacity)
{
    std::cout << __FUNCTION__ << std::endl;
}

ElectricEngine::~ElectricEngine() {
    std::cout << __FUNCTION__ << std::endl;
}

Power ElectricEngine::getPower() const { return power_; }
ElectricCapacity ElectricEngine::getBatteryCapacity() const { return batteryCapacity_; }