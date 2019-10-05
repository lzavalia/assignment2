//Created by Lucas Zavalia


#include "Canoe.h"

Canoe::Canoe(string brand, string model, int size)
{
   setLength(size);
   setBrand(brand);
   setModel(model);
}

Canoe::~Canoe() = default;

int Canoe::getLength()
{
   return length;
}

void Canoe::setLength(int size)
{
   if (size > 20)
   {
      size = 20;
   }
   if (size < 6)
   {
      size = 6;
   }
   length = size;
}

double Canoe::mileageEstimate(double time)
{
   if (getLength() > 11)
   {
      double mileage = 0.7 * time;
      return mileage;
   }
   double mileage = 0.5 * time;
   return mileage;
}
