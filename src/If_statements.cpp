#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//1
//int main()
//{
//	int a;
//	cout << "Enter a number: ";
//	cin >> a;
//	if (a < 10)
//	{
//		cout << "The number is less than 10.\n";
//	}
//	else if (a > 10)
//	{
//		cout << "The number is greater than 10.\n";
//	}
//	else
//	{
//		cout << "The number is 10.\n";
//	}
//}

//2
//int main()
//{
//	int milkPackages;
//	cout << "How many milk packages is left? ";
//	cin >> milkPackages;
//	if (milkPackages < 10)
//	{
//		cout << "Order 30 packages.\n";
//	}
//	else if (milkPackages >= 10 && milkPackages < 20)
//	{
//		cout << "Order 20 packages.\n";
//	}
//	else
//	{
//		cout << "No need to order more.\n";
//	}
//}

//3
//int main()
//{
//	float temp;
//	cout << "Enter the temperature: ";
//	cin >> temp;
//	if (temp <= 37.8)
//	{
//		cout << "You do not have a fever.\n";
//	}
//	if (temp > 37.8 && temp <= 39.5)
//	{
//		cout << "You have a fever.\n";
//	}
//	else if (temp > 39.5)
//	{
//		cout << "You should see a doctor.\n";
//	}
//}

//4
//int main()
//{
//	int age;
//	cout << "Enter your age: ";
//	cin >> age;
//	if (cin.fail())
//	{
//		cout << "Wrong input type!\n";
//	}
//	else
//	{
//		if (age < 18)
//		{
//			cout << "You are a minor.\n";
//		}
//		else if (age >= 18 && age < 65)
//		{
//			cout << "You are an adult.\n";
//		}
//		else if (age >= 65)
//		{
//			cout << "You are a senior.\n";
//		}
//	}
//}

//5
//int main()
//{
//	int cat;
//	cout << "Enter what category you belong to:\n1. Student\n2. Adult\n3. Senior\n";
//	cin >> cat;
//	if (cin.fail() || (cat != 1 && cat != 2 && cat != 3))
//	{
//		cout << "Not a valid category!\n";
//	}
//	else
//	{
//		if (cat == 1 || cat == 3)
//		{
//			cout << "The ticket is 20kr.\n";
//		}
//		else
//		{
//			cout << "The ticket is 30kr.\n";
//		}
//	}
//}

//6
//int main()
//{
//	int birthYear;
//	cout << "Enter your birth year: ";
//	cin >> birthYear;
//	if (birthYear >= 1980 && birthYear < 1990)
//	{
//		cout << "You were born in the 80's.\n";
//	}
//	else if (birthYear >= 1990 && birthYear < 2000)
//	{
//		cout << "You were born in the 90's.\n";
//	}
//	else
//	{
//		cout << "You were not born in the 80's or 90's.\n";
//	}
//}

//7
//int main()
//{
//	string userName = "elgr";
//	string password = "1995";
//	string givenUserName;
//	string givenPassword;
//	cout << "Enter your user name: ";
//	cin >> givenUserName;
//	cout << "Enter your password: ";
//	cin >> givenPassword;
//	if (userName.compare(givenUserName) == 0 && password.compare(givenPassword) == 0)
//	{
//		cout << "You have logged in.\n";
//	}
//	else
//	{
//		cout << "Invalid user name or password.\n";
//	}
//}

//8
//int main()
//{
//	string country;
//	cout << "Enter which country you live in: ";
//	cin >> country;
//	if (country.compare("sweden") == 0 || country.compare("norway") == 0 || country.compare("denmark") == 0)
//	{
//		cout << "You live in Scandinavia.\n";
//	}
//	else
//	{
//		cout << "You do not live in Scandinavia.\n";
//	}
//}

//9
//int main()
//{
//	string brand;
//	cout << "Enter the brand of the car: ";
//	cin >> brand;
//	if (brand.compare("Volvo") != 0)
//	{
//		if (brand.compare("Audi") == 0 || brand.compare("Volkswagen") == 0 || brand.compare("BMW") == 0)
//		{
//			cout << "The brand is german.\n";
//		}
//		else if (brand.compare("Renault") == 0 || brand.compare("Peugeot") == 0 || brand.compare("Citroen") == 0)
//		{
//			cout << "The brand is french.\n";
//		}
//		else
//		{
//			cout << "The brand is not german, french, or swedish.\n";
//		}
//	}
//}

//10
//int main()
//{
//	int amount;
//	char discount;
//	cout << "Enter the amount of money you have: ";
//	cin >> amount;
//	cout << "Do you have a discount Y/N? ";
//	cin >> discount;
//	if (amount >= 15 && amount < 25)
//	{
//		if (discount == 'N')
//		{
//			cout << "You can buy a small burger.\n";
//		}	
//		else
//		{
//			cout << "You can buy a small burger and fries.\n";
//		}
//	}
//	else if (amount >= 25 && amount < 50)
//	{
//		if (discount == 'N')
//		{
//			cout << "You can buy a big burger.\n";
//		}
//		else
//		{
//			cout << "You can buy a big burger and fries.\n";
//		}
//	}
//	else if ((amount >= 50 && amount < 60 && discount == 'Y') || amount >= 60)
//	{
//		cout << "You can buy a meal with beverage.\n";
//	}
//}

//11
//int main()
//{
//	int days, hours, minutes, totalMinutes;
//	cout << "Enter a number of minutes: ";
//	cin >> totalMinutes;
//	if (totalMinutes >=0 && totalMinutes < 60)
//	{
//		cout << "This equals " << totalMinutes << ".\n";
//	}
//	else if (totalMinutes >= 60 && totalMinutes < 1440)
//	{
//		hours = totalMinutes / 60;
//		minutes = totalMinutes % 60;
//		cout << "This equals " << hours << " hours and " << minutes << " minutes.\n";
//	}
//	else 
//	{
//		days = totalMinutes / 1440;
//		hours = (totalMinutes % 1440) / 60;
//		minutes = (totalMinutes % 1440) % 60;
//		cout << "This equals " << days << " days, " << hours << " hours, " << minutes << " minutes.\n";
//	}
//}

//12
//int main()
//{
//	int amount, one, hundred, fiveHundred;
//	cout << "Enter the amount of oney you have: ";
//	cin >> amount;
//	if (amount >= 0 && amount < 100)
//	{
//		cout << "This equals " << amount << "1-coins.\n";
//	}
//	else if (amount >= 100 && amount < 500)
//	{
//		hundred = amount / 100;
//		one = amount % 100;
//		cout << "This equals " << hundred << " 100-bills, " << one << " 1-coins.\n";
//	}
//	else
//	{
//		fiveHundred = amount / 500;
//		hundred = (amount % 500) / 100;
//		one = (amount % 500) % 100;
//		cout << "This equals " << fiveHundred << " 500-bills, " << hundred << " 100-bills, " << one << " 1-coins.\n";
//	}
//}