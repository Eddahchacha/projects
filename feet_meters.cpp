#include <iostream>
using namespace std;

int main()
{
	//1 foot = 0.3048 meters
	const double feet_to_meters = 0.3048;
	double feet,meters;
	cout <<"Enter length in feet:";
	cin >> feet;
	
	meters = feet* feet_to_meters;
	cout<< feet << " feet = ";
	cout << meters << "meters" << endl;
	
	return 0;
}