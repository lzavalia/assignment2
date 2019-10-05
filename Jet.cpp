//Created by Lucas Zavalia

#include <cstdlib>
#include "Jet.h"

Jet::Jet()
{
   numberOfEngines = 1;
   setBrand("Custom");
   setModel("VTX);
}

Jet::Jet(string brand, string model, string fuelType, int engineNumber) 
{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(engineNumber);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines()
{
   return numberOfEngines;
}

void Jet::setNumberOfEngines(int engineNumber)
{
   numberOfEngines = engineNumber;
}

double Jet::mileageEstimate(double time)
{
   srand(time(NULL));
   double mileage = time * (rand() % 100 + 40);
   if (getNumberOfEngines() > 2 && getFuelType() == "Rocket")
   {
      mileage = mileage * 1.055;
   }
   return mileage;
}

string Jet::toString()
{
   return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: "
          + getNumberOfEngines();
}


