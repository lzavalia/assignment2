//Created by Lucas Zavalia

#include <cstdlib>
#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model)
{
   setBrand(brand);
   setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)
{
   srand(time(NULL));
   double mileage = 0.1 * (rand() % 5 + 1);
   if (time > 25 && time < 250)
   {
      mileage += (rand() % ((int) time/3) + 1);
   }
}

string Skateboard::toString()
{
   return "-> Skateboard\n" + Vehicle::toString();
}
