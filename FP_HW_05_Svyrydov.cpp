#include <iostream>
using namespace std;

int main()      // Task 1. The user enters a six-digit integer number from the keyboard. Write a program that determines if a number is lucky
{               // (the sum of the first three numbers is equal to the sum of the other three)
    int a;

    cout << "Enter six-digit integer number to check if a number is lucky" << endl;    cin >> a;	// Data input

    if ((a >= 100000) && (a <= 999999)) {   //  Checking the correctness of the entered data

        int b, c, d;

        b = a % 1000;    //  Dividing a number into two others
        a /= 1000;       //

        c = (a % 10) + ((a % 100) / 10) + (a / 100); //  Getting the sum of the first three numbers
        d = (b % 10) + ((b % 100) / 10) + (b / 100); //  Getting the sum of the second three numbers

        if (c == d) {    //  Checking if a number is lucky
            
			cout << "Your number is lucky!";		// Program result 
        }
        else
        {
            cout << "Your number is unlucky :C";	// Program result
        }

    }
    else
    {
        cout << "Please enter a SIX-digit number";		// Message to user if data incorrect
    }
}
 







#include <iostream>
using namespace std;

int main()      // Task 2. The user enters 7 integers from the keyboard. Write a program that determines the maximum of these 7 numbers
{               
    int a, b, c, d, e, f, g;

    cout << "Enter the first number: "; cin >> a;       // Data input
    cout << "Enter the second number: "; cin >> b;	    //
    cout << "Enter the third number: "; cin >> c;	    //
    cout << "Enter the fourth number: "; cin >> d;	    //
    cout << "Enter the fifth number: "; cin >> e;	    //
    cout << "Enter the sixth number: "; cin >> f;	    //
    cout << "Enter the seventh number: "; cin >> g;	    //

    if (a < b) {			//	Comparison and substitution of a larger number
        a = b;
    }
    if (a < c) {			//
        a = c;
    }
    if (a < d) {            //
        a = d;
    }
    if (a < e) {            //
        a = e;
    }
    if (a < f) {            //
        a = f;
    }
    if (a < g) {            //
        a = g;
    }

    cout << "The number " << a << " is larger than the others" << endl;    // Program result
}








#include <iostream>
using namespace std;

int main()      // Task 3. The user enters a four-digit number. It is necessary to change 1 and 2 digits, as well as 3 and 4 digits in this number.
{
	int a;

	cout << "Enter a four-digit number: ";	cin >> a;	// Data input

	if ((a >= 1000) && (a <= 9999)) {   // Checking the correctness of the entered data

		int b, c, d, e, f;

		d = a % 10;				// Dividing a number into others
		c = (a % 100) / 10;		//
		b = (a % 1000) / 100;	//
		a /= 1000;				//

		cout << "\nDo you want to change the first digit?\n" << "\n1 - Yes\n" << "0 - No\n"; cin >> f;  //* Questions to the user about changing the digit
		if (f == 1) {
			cout << "The first digit is: " << a << "\nEnter new\n";	cin >> a;   //^ Changing the digit if it selected
		}

		cout << "\nDo you want to change the second digit?\n" << "\n1 - Yes\n" << "0 - No\n"; cin >> f; //*
		if (f == 1) {
			cout << "The second digit is: " << b << "\nEnter new\n"; cin >> b;  //^
		}

		cout << "\nDo you want to change the third digit?\n" << "\n1 - Yes\n" << "0 - No\n"; cin >> f;  //*
		if (f == 1) {
			cout << "The third digit is: " << c << "\nEnter new\n";	cin >> c;   //^
		}

		cout << "\nDo you want to change the fourth digit?\n" << "\n1 - Yes\n" << "0 - No\n"; cin >> f; //*
		if (f == 1) {
			cout << "The fourth digit is: " << d << "\nEnter new\n"; cin >> d;  //^
		}

		cout <<"Your new number is: " << a << b << c << d;	// Program result
	}
	else {
		cout << "Please enter a FOURTH-digit number";	// Message to user if data incorrect
	}
}







//  	Additional tasks
// 
//		Write a program, during the execution of which the coordinates of a point on the plane are read from the keyboardand
//		the membership of this point to the given shaded area(including the boundaries) is determined.
//		If the point is inside the shaded area, display the word "Inside", if outside - "Outside".


#include <iostream> 
using namespace std;

int main()		// Additional task 1.
{
	int x, y;

	cout << "x: "; cin >> x;	// Data input
	cout << "y: "; cin >> y;	//

	if (y >= -2) {		// Point position conditions		

		cout << "Inside";	// Program result
	}
	else
	{
		cout << "Outside";	// 
	}
}







#include <iostream> 
using namespace std;

int main()	// Additional task 2.
{
	int x, y;

	cout << "x: "; cin >> x;	// Data input
	cout << "y: "; cin >> y;	//

	if (((y >= -3) && (x >= 5)) || ((y >= 2) && (x <= 2))) {	// Point position conditions

		cout << "Inside";	// Program result
	}
	else
	{
		cout << "Outside";	// 
	}
}







#include <iostream> 
using namespace std;

int main()	// Additional task 4.
{
	int x, y;

	cout << "x: "; cin >> x;	// Data input
	cout << "y: "; cin >> y;	//

	if ((y >= 2) && (y <= 7) && (x <= -1) && (x >= -6)) {	// Point position conditions

		cout << "Inside";	// Program result
	}
	else
	{
		cout << "Outside";	// 
	}
}






#include <iostream> 
using namespace std;

int main()	// Additional task 5.
{
	int x, y;

	cout << "x: "; cin >> x;	// Data input
	cout << "y: "; cin >> y;	//

	if (((y >= -3) && (y <= 5) && (x >= -5) && (x <= 2)) && (!((y == 3) && ((x == 0) || (x == -3))) && !((y == -1) && ((x <= 0) && (x >= -3))))) {	// Point position conditions

		cout << "Inside";	// Program result
	}
	else
	{
		cout << "Outside";	// 
	}
}
