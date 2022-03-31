#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double time, average, gram;
	
	cout << "Grocery sold in kg: 6" << endl
	     << "Time: 15 hours 20 minutes 30 seconds" << endl;
	     
	average = (6.0 * 1000.0) / (15.0 + (20.0/60.0) + (30.0/60.0/60.0));
	
	cout << "The average sale in gram per hour: " << average << endl;
	
	return 0;
}