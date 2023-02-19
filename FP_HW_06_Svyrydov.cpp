
#include <iostream>			//	From the author:
using namespace std;		//  It seems to work, but most likely not quite right

int main()		// Task 1. The user enters two dates(day, month, year in the form of whole numbers).
				// It is necessary to determine and output the number of days between these two dates.
				// For calculations, take into account leap years, as well as the correct number of days in months.
{
	int day_1, day_2;
	int month_1, month_2, cin_month_1, cin_month_2;
	int year_1, year_2, years;

	enum months //	Days in monhs
	{
		January = 31, February = 28, March = 31, April = 30, May = 31, June = 30, July = 31, August = 31, September = 30, October = 31, November = 30, December = 31
	};
	enum months_num	// Monhs numbers
	{
		January_num = 1, February_num, March_num, April_num, May_num, June_num, July_num, August_num, September_num, October_num, November_num, December_num
	};


	cout << "\n\tEnter the first date (first date must be lower than second)\n\n\tDay: "; cin >> day_1;
	cout << "\n\tMonth: ";	cin >> cin_month_1;
	cout << "\n\tYear: ";	cin >> year_1;

	cout << "\n\tEnter the second date\n\n\tDay: "; cin >> day_2;
	cout << "\n\tMonth: ";	cin >> cin_month_2;
	cout << "\n\tYear: ";	cin >> year_2;

	if (year_1 <= year_2) {		// Number of leap years
		years = year_2 - year_1;

		//	(!(years % 4)) ? years = years / 4 + 1 : years /= 4;

		if (!(years % 4)) {

			years = years / 4 + 1;

		}
		else
		{
			years /= 4;
		}

		//	month_1 = (months_num)cin_month_1;

		// Days in a year before a given date 1

		switch ((months_num)cin_month_1) // it`s working too		and switch make auto cases from "months_num"
		{
		case January_num:

			day_1;

			break;
		case February_num:

			day_1 += January;

			break;
		case March_num:

			day_1 += January + February;

			break;
		case April_num:

			day_1 += January + February + March;

			break;
		case May_num:

			day_1 += January + February + March + April;

			break;
		case June_num:

			day_1 += January + February + March + April + May;

			break;
		case July_num:

			day_1 += January + February + March + April + May + June;

			break;
		case August_num:

			day_1 += January + February + March + April + May + June + July;

			break;
		case September_num:

			day_1 += January + February + March + April + May + June + July + August;

			break;
		case October_num:

			day_1 += January + February + March + April + May + June + July + August + September;

			break;
		case November_num:

			day_1 += January + February + March + April + May + June + July + August + September + October;

			break;
		case December_num:

			day_1 += January + February + March + April + May + June + July + August + September + October + November;

			break;
		default:
			break;
		}



		//month_2 = (months_num)cin_month_2;

		// Days in a year before a given date 2

		switch ((months_num)cin_month_2)	// it`s working too		and switch make auto cases from "months_num"
		{
		case January_num:

			day_2;

			break;
		case February_num:

			day_2 += January;

			break;
		case March_num:

			day_2 += January + February;

			break;
		case April_num:

			day_2 += January + February + March;

			break;
		case May_num:

			day_2 += January + February + March + April;

			break;
		case June_num:

			day_2 += January + February + March + April + May;

			break;
		case July_num:

			day_2 += January + February + March + April + May + June;

			break;
		case August_num:

			day_2 += January + February + March + April + May + June + July;

			break;
		case September_num:

			day_2 += January + February + March + April + May + June + July + August;

			break;
		case October_num:

			day_2 += January + February + March + April + May + June + July + August + September;

			break;
		case November_num:

			day_2 += January + February + March + April + May + June + July + August + September + October;

			break;
		case December_num:

			day_2 += January + February + March + April + May + June + July + August + September + October + November;

			break;
		default:
			break;
		}


		if (!(year_1 % 4) && cin_month_1 > 2) {		// If the start date of a leap year is greater than February 29, then subtract 1 from the number of leap years
			years -= 1;
		}
		if (!(year_2 % 4) && day_2 <= 29 && cin_month_2 < 3) {		//If the end date is before February 29, then subtract 1 from high years
			years -= 1;
		}

		if (year_1 == year_2)
		{
			cout << "Days between dates:	" << (day_2 - day_1) + years;
		}
		else
			cout << "Days between dates:  " << (year_2 - year_1) * 365 + ((day_2 - day_1) + years) << endl;
		return 0;

	}
	else
	{
		cout << "\n\tFirst date must be lower than second";
	}



}







#include <iostream>

using namespace std;

int main()		// Task 2. The manager's salary is $200 + a percentage of sales, sales up to $500 - 3%, from 500 to 1000 - 5%, over 1000 - 8%.
				// The user enters from the keyboard - the level of sales for three managers.
				// Determine their salary, determine the best manager, charge him a bonus of $200, display the results on the screen.
{
	double const salary = 200;
	
	string manager_1_name, manager_2_name, manager_3_name;

	cout << "\n\tEnter the First manager name: ";	cin >> manager_1_name;
	cout << "\tEnter the Second manager name: ";	cin >> manager_2_name;
	cout << "\tEnter the Third manager name: ";		cin >> manager_3_name;

	
	double manager_1, manager_2, manager_3;

	cout << "\n\tEnter the " << manager_1_name << "'s sales : ";	cin >> manager_1;
	cout << "\tEnter the " << manager_2_name << "'s sales: ";		cin >> manager_2;
	cout << "\tEnter the " << manager_3_name << "'s sales: ";		cin >> manager_3;

	// Manager 1 if
	if (manager_1 < 500) {			// 3%

		manager_1 = manager_1 * 0.03 + salary;

	}
	else if (manager_1 <= 1000) {	// 5%

		manager_1 = manager_1 * 0.05 + salary;

	}
	else if (manager_1 > 1000) {	// 8%

		manager_1 = manager_1 * 0.08 + salary;

	}


	// Manager 2 if
	if (manager_2 < 500) {			// 3%

		manager_2 = manager_2 * 0.03 + salary;

	}
	else if (manager_2 <= 1000) {	// 5%

		manager_2 = manager_2 * 0.05 + salary;

	}
	else if (manager_2 > 1000) {	// 8%

		manager_2 = manager_2 * 0.08 + salary;

	}


	// Manager 3 if
	if (manager_3 < 500) {			// 3%

		manager_3 = manager_3 * 0.03 + salary;

	}
	else if (manager_3 <= 1000) {	// 5%

		manager_3 = manager_3 * 0.05 + salary;

	}
	else if (manager_3 > 1000) {	// 8%

		manager_3 = manager_3 * 0.08 + salary;

	}

	// Managers success

	cout << "\n\n\tManagers success\n\n\t" << manager_1_name << " => " << manager_1 << "\n\t" << manager_2_name << " => " << manager_2 << "\n\t" << manager_3_name << " => " << manager_3;

	// Choosing the best manager

	double best_manager = manager_1;

	if (best_manager < manager_2) {

		best_manager = manager_2;
	}
	if (best_manager < manager_3) {

		best_manager = manager_3;
	}

	// Giving premium to the best manager (salary == premium)

	if (manager_1 == best_manager) {

		manager_1 += salary;

		cout << "\n\n\t" << manager_1_name << " is the best manager\n\tSalary with premium: " << manager_1;

	}
	else if (manager_2 == best_manager) {

		manager_2 += salary;

		cout << "\n\n\t" << manager_2_name << " is the best manager\n\tSalary with premium: " << manager_2;

	}
	else if (manager_3 == best_manager) {

		manager_3 += salary;

		cout << "\n\n\t" << manager_3_name << " is the best manager\n\tSalary with premium: " << manager_3;


	}

	cout << "\n\n\n";

}








