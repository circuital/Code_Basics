#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//1
//int main()
//{
//	string name = "Elvira Granqvist";
//	cout << name << "\n";
//}

//2
//int main()
//{
//	string name = "Elvira Granqvist";
//	int age = 25;
//	cout << "My name is " << name << " and I am " << age << " years old.\n";
//}

//3
//int main()
//{
//	string firstName, lastName;
//	cout << "Enter your first name: ";
//	cin >> firstName;
//	cout << "Enter your last name: ";
//	cin >> lastName;
//	cout << "Your name is: " << lastName << ", " << firstName << "\n";
//}

//4
//int main()
//{
//	int a, b;
//	cout << "Enter a digit: ";
//	cin >> a;
//	cout << "Enter another digit: ";
//	cin >> b;
//	cout << "The sum is: " << a + b;
//}

//5
//int main()
//{
//	time_t currentSeconds = time(0);
//	struct tm* currentDate = localtime(&currentSeconds);
//
//	int userYear;
//	cout << "Enter the year you were born: ";
//	cin >> userYear;
//	
//	struct tm userDate;
//	userDate.tm_year = userYear;
//	userDate.tm_mon = 0;
//	userDate.tm_mday = 0;
//	userDate.tm_mon = 0;
//	userDate.tm_min = 0;
//	userDate.tm_sec = 0;
//	mktime(&userDate);
//	
//	int age = currentDate->tm_year + 1900 - userDate.tm_year;
//	cout << "You are " << age << " years old.";
//}

//6
//int main()
//{
//	int a, b, sum, dif, mean;
//	cout << "Enter a digit: ";
//	cin >> a;
//	cout << "Enter another digit: ";
//	cin >> b;
//	sum = a + b;
//	dif = abs(a - b);
//	mean = sum / 2;
//	cout << "Sum: " << sum << "\nDifference: " << dif << "\nMean: " << mean;
//}

//7
//int main()
//{
//	int price;
//	cout << "Enter a price: ";
//	cin >> price;
//	cout << "The price with moms is: " << price * 1.25;
//}

//8
int main()
{
	int minutes, hours, totalMinutes;
	cout << "Enter a number of minutes: ";
	cin >> totalMinutes;
	hours = totalMinutes / 60;
	minutes = totalMinutes % 60;
	cout << "This equals " << hours << " hours and " << minutes << " minutes.\n";
}


