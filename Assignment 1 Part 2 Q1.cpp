#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double area, perimeter;
	const double side = 8.2;
	
	area = 1.732 * pow(side,2) / 4;
	perimeter = 3 * side;
	
	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;
	
	return 0;
}