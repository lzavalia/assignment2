//Created by Lucas Zavalia


#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
   int numberOfEngines;

public:
   Jet();

   explicit Jet(string brand, string model, string fuelType,
                int engineNumber);

   virtual ~Jet();
   int getNumberOfEngines();
   void setNumberOfEngines(int engineNumber):
   virtual double mileageEstimate(double time);
   virtual string toString();
};

#endif
