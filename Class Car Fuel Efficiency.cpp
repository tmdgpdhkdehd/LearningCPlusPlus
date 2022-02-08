#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Car {
private:	
	int totalFuelAmount;
	int totalDist;
	
	public:
		Car(int initialFuel, int initialDist): totalFuelAmount(initialFuel), totalDist(initialDist) {}

		void setFuelDist(int liter, int kiloMeter)
		{ 
			totalFuelAmount += liter;
			totalDist += kiloMeter;
		}
		
		int getTotalFuel() { return totalFuelAmount; }
		int getTotalDist() { return totalDist; }

		bool getFuelEfficiency(float& fEfficiency) 
		{
			if (totalFuelAmount == 0)
				return false;

			fEfficiency = (float)totalDist/(float)totalFuelAmount; 
			return true;
		}
};

int main()
{
	Car car(0,0);

	car.setFuelDist(30,300);
	
	float fEfficiency = 0;
	if (car.getFuelEfficiency(fEfficiency))
	{
		cout << fEfficiency << " km/liter" << endl;
	}	
}
