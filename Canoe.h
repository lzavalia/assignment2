//Created by Lucas Zavalia

#ifndef DRIVINSIMULATOR_CANOE_H
#define DRIVINSIMULATOR_CANOE_H

#include "Vehicle.h"

class Canoe : public Vehicle
{
private:
   int length;

public:
   explicit Canoe(string brand, string model, int size);

   virtual ~Canoe();
   int getLength();
   void setLength(int size);
   virtual double mileageEstimate(double time);
   virtual string toString();
};

#endif
