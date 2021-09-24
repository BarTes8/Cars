#pragma once
#include "Engine.hpp"
#include "Gearable.hpp"
#include "PetrolCapacity.hpp"

class PetrolEngine : virtual Engine, public Gearable {
public:
    PetrolEngine(Power power, PetrolCapacity capacity, int gears);
    ~PetrolEngine() override;

    Power getPower() const { return power_; }
    PetrolCapacity getCapacity() const { return capacity_; }
    int getGears() const { return gears_; }
    
    void changeGear(int gear) override;

protected:
    PetrolCapacity capacity_;  // in ccm
    const int gears_;
    int currentGear_ = 0;
};
