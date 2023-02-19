#include <iostream>

using namespace std;

int main()	//	Task 1. Write a program that will calculate the volume of a parallelepiped. All data for the calculation must be entered by the user from the keyboard
{
	double a, b, c, V;

	cout << "Calculating the volume of a parallelepiped." << endl;
	cout << "Enter initial data" << endl;
	cout << "Length (cm): "; cin >> a;
	cout << "Width (cm): "; cin >> b;
	cout << "Height (cm): "; cin >> c;

	V = a * b * c;	//	Calculating the volume

	cout << "Volume is " << V << " cubic centimeters";
}
 
 
//Output preview
// 
//Calculating the volume of a parallelepiped.
//Enter initial data
//Length(cm) : 9
//Width(cm) : 7.5
//Height(cm) : 5
//Volume is 337.5 cubic centimeters



#include <iostream>

using namespace std;

int main()	//	Task 2. Write a program to calculate the volume of a sphere. All data for the calculation must be entered by the user from the keyboard
{
	double r, V;
	
	cout << "Calculating the volume of a sphere." << endl;
	cout << "Enter initial data" << endl;
	cout << "Radius (cm): "; cin >> r;

	V = 0.75 * 3.14 * (r * r * r);	//	Calculating the volume

	cout << "Volume is " << V << " cubic centimeters";
}


// Output preview
// 
//Calculating the volume of a sphere.
//Enter initial data
//Radius(cm) : 4
//Volume is 150.72 cubic centimeters




#include <iostream>

using namespace std;

int main()	//	Task 3. Write a program that converts a fractional number entered from the keyboard into a currency format
{
	double a;
	int b, c, e;

	cout << "Enter a fractional number to convert into a currency format" << endl;	cin >> a;

	b = a * 100;
	c = b % 100; // Getting coins value
	b /= 100;
	e = b % 100; // Getting money value

	cout << e << " (UAH) " << c << " (Coins)";
}


//Output preview
//
//Enter a fractional number to convert into a currency format
//12.5
//12 (UAH)50 (Coins)




#include <iostream>

using namespace std;

int main()	//	Task 4. Write a program that calculates how fast a runner ran a distance
{
	double a, kmh, v, d, s;
	int b, c, e;

	cout << "Running speed calculation" << endl;
	cout << "Eenter the length of the distance (meters) = ";	cin >> d;
	cout << "Enter time (min.sec) = ";	cin >> a;

	b = a * 100;
	c = b % 100;	// Getting sec value
	b /= 100;
	e = b % 100;	// Getting min value

	s = a * 60;		//	Getting time in sec

	v = d / s;		// Metrs per sec

	kmh = v * 3.6;  // km/h

	cout << "Distance: " << d << " meters" << endl;
	cout << "Time: " << e << " min " << c << " sec = " << s << " sec" << endl;
	cout << "You were running at a speed of " << kmh << " km/h" << endl;
}


//Output preview
//
//Running speed calculation
//Eenter the length of the distance(meters) = 1000
//Enter time(min.sec) = 3.25
//Distance: 1000 meters
//Time : 3 min 25 sec = 195 sec
//You were running at a speed of 18.4615 km / h



#include <iostream>

using namespace std;

int main()	//	Task 5. Write a program that converts the number of days entered by the user into the number of complete weeks and days
{
	int D, w, d;

	cout << "Enter number of days: ";	cin >> D;

	d = D % 7;			 // Getting days value
	w = (D - d) / 7;	 // Getting week value

	cout << w << " Weeks " << d << " Days" << endl;
}


//Output preview
//
//Enter number of days : 17
//2 Weeks 3 Days