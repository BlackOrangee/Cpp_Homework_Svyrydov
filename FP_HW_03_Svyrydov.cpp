#include <iostream>

using namespace std;

int main() //Task_1
{
   const int time = 86400;
   int a;
   cout << "Enter the time in seconds elapsed since the beginning of the day" << endl;
   cin >> a;
   int h = a % time / 3600;
   int m = a / 60 % 60;
   int s = a % 60;
   int eh;
   int em;
   int es;
   int tmp = h * 3600 + m * 60 + s;
   tmp = time - tmp;
   eh = tmp / 3600;
   em = tmp / 60 - eh * 60;
   es = tmp - em * 60 - eh * 3600;
   cout << "Current time: " << h << ":" << m << ":" << s << endl;
   cout << "Time to midnight: "<< eh << ":" << em << ":" << es << endl;
   return 0;

}








#include <iostream>

using namespace std;

int main() //Task_2
{
	double gb;
	double bit;
	cout << "Enter the file size (Gb):";
	cin >> gb;
	cout << "Enter the internet speed (Mbit/s):";	
	cin >> bit;
	gb = gb * 1024 * 8;
	gb/=bit;
	int h = gb / 3600;
	int m = gb/60 - h * 60;
	int s = gb - m * 60 - h * 3600;
	cout << "Download completion time: " << h << ":" << m << ":" << s << endl;
	return 0;

}








#include <iostream>

using namespace std;
 
int main() //Task_3
{ 
	int a;
	cout << "Enter the \"Number\""
	cout << "\"rebmuN\" is"
	cin >> a;
	cout << a % 10;
	a /= 10;
	cout << a % 10;
	a /= 10;
	cout << a % 10;
	a /= 10;
	cout << a % 10;
	a /= 10;
	cout << endl << endl;
 
return 0;
}





#include <iostream>

using namespace std;
 
int main() //Task_4
{ 
	double usd;
	double vids;
	double vidsm;
	int strok;
	cout << "Enter your deposit (USD):";
	cin >> usd;
	cout << "Length of deposit(month):";
	cin >> strok;
	cout << "%:";
	cin >> vids;
	vidsm = (vids/100.0) / 12 * 1;
	cout << "Profit per mounth: "<< vidsm << endl;
	vids = (vids/100.0) / 12 * strok;
	cout << "Profit per " << strok << " mounth: "<< vids << endl;
	usd = usd*vids + usd;
	cout << "Your deposit after " << strok << " mounth: " << usd << endl;

return 0;
}







#include <iostream>

using namespace std;
 
int main() //Task_5_1
{ 
	double r0;
	double r1;
	double r2;
	double r3;
	cout << "Enter R1, R2, R3."
	cin >> r1 >> r2 >> r3;
	r1 = 1 /r1;
	r2 = 1 /r2;
	r3 = 1 /r3;
	r0 = r1 + r2 + r3;
	r0 = 1 / r0;
	cout << "1/R0 = 1/R1 + 1/R2 + 1/R3" << endl;
	cout << "R0 = " << r0;
	
return 0;
}








#include <iostream>

using namespace std;
 
int main() //Task_5_2
{ 

	double l;
	double s;
	cout << "Enter the circle length "
	cin >> l;
	s = (l * l) / (4 * 3.14);
	cout << "Circle square is " << s;
	
	
	return 0;
}







#include <iostream>

using namespace std;
 
int main() //Task_5_3
{ 

	double v;
	double t;
	double a;
	double s;
	cout << "Enter current Speed, Time and Acceleration";
	cin >> v >> t >> a;
	s = v * t + (a * t * 2) / 2;
	cout << "Distance traveled: " << s; 
	
	
		
	return 0;
}




