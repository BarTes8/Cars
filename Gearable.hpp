#pragma once

enum class ManualGear : int {
   reverse = -1,
   neutral,
   gear_1st,
   gear_2nd,
   gear_3rd,
   gear_4th,
   gear_5th,
   gear_6th,
   gear_7th,
   gear_8th,
   gear_9th,
   limit = gear_9th
};

enum class AutomatGear : int {
   reverse = -1,
   neutral,
   park, 
   low, 
   drive,
   overdrive,
   limit = overdrive
};

class Gearable {
public:
   virtual ~Gearable() = default;
   virtual void changeGear(int gear) = 0;
};