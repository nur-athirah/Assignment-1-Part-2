#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int minutes, days, years, days_left;
	
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	cout << endl;
	
	days = minutes / 60 / 24;
	years = days / 365; 
	days_left = days % 365;
	
	cout << minutes << " minutes is approximately " << years << " years and " << days_left << " days" << endl;
	 
	return 0;
}