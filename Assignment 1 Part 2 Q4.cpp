#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double RATE = 0.00417;

	int monthly_save;
	double month1, month2, month3, month4, month5, acc_value;
	
	cout << "Enter the monthly saving amount: ";
	cin >> monthly_save;
	cout << endl;
	
	month1 = monthly_save + monthly_save * RATE;
	month2 = month1 + monthly_save + ((month1 + monthly_save) * RATE);
	month3 = month2 + monthly_save + ((month2 + monthly_save) * RATE);
	month4 = month3 + monthly_save + ((month3 + monthly_save) * RATE);
	month5 = month4 + monthly_save + ((month4 + monthly_save) * RATE);
	acc_value = month5 + monthly_save + ((month5 + monthly_save) * RATE);
	
	cout << "After the sixth month, the account value is $" 
	     << fixed << setprecision(2) << acc_value << endl;
	     
	return 0;
}