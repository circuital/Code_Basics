#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <list>
using namespace std;

//1
//int main()
//{
//	for (int i = 0; i < 11; i++)
//	{
//		cout << i << '\n';
//	}
//}

//2
//int main()
//{
//	int a, b;
//	cout << "Enter a digit: ";
//	cin >> a;
//	cout << "Enter another digit: ";
//	cin >> b;
//	if (a <= b)
//	{
//		for (int i = a; i <= b; i++)
//		{
//			cout << i << '\n';
//		}
//	}
//	else
//	{
//		for (int i = b; i <= a; i++)
//		{
//			cout << i << '\n';
//		}
//	}
//}

//3
//int main()
//{
//	int a, b;
//	char ans = 'y';
//	while (tolower(ans) == 'y')
//	{
//		cout << "Enter a digit: ";
//		cin >> a;
//		cout << "Enter another digit: ";
//		cin >> b;
//		cout << "Sum: " << a + b << ". Do you want to continue? (Y/N)";
//		cin >> ans;
//	}
//}

//4
//int main()
//{
//	int a, sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter a digit: ";
//		cin >> a;
//		sum += a;
//	}
//	cout << "Sum: " << sum << ".\n";
//}

//5
//int main()
//{
//	int a;
//	cout << "Enter a digit: ";
//	cin >> a;
//	for (int i = 1; i < a; i++)
//	{
//		cout << i << "\n";
//	}
//}

//6
//int main()
//{
//	int a = 0;
//	while (a != 10)
//	{
//		cout << "Enter a digit: ";
//		cin >> a;
//		if (a < 10)
//		{
//			cout << "Too low!\n";
//		}
//		else if (a > 10)
//		{
//			cout << "Too high!\n";
//		}
//		else
//		{
//			cout << "You entered the right digit!\n";
//		}
//	}
//}

//7
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			cout << i << "\n";
//		}
//	}
//}

//8
//int main()
//{
//	int a;
//	cout << "Enter a digit: ";
//	cin >> a;
//	if (cin.fail())
//	{
//		cout << "Not a digit!\n";
//	}
//	else
//	{
//		if (a > 30)
//		{
//			cout << "You entered an invalid digit.\n";
//		}
//		else
//		{
//			for (int i = a + 1; i <= 30; i++)
//			{
//				cout << i << "\n";
//			}
//		}
//	}
//}

//9 HJÄLP
//int main()
//{
//	string name, streetAddress, postalCode, postalAddress;
//	while (name.empty() || streetAddress.empty() || postalCode.empty() || postalAddress.empty())
//	{
//		if (name.empty())
//		{
//			cout << "Enter your name: ";
//			cin >> name;
//		}
//		if (streetAddress.empty())
//		{
//			cout << "Enter your street address: ";
//			cin >> streetAddress;
//		}
//		if (postalCode.empty())
//		{
//			cout << "Enter your postal code: ";
//			cin >> postalCode;
//		}
//		if (postalAddress.empty())
//		{
//			cout << "Enter your postal address: ";
//			cin >> postalAddress;
//		}
//	}
//	cout << "All input is given.\n";
//}

//10 HJÄLP
//int main()
//{
//	int temp, numberOfElements, sum;
//	list <int> tempValues;
//	while (true)
//	{
//		cout << "Enter a temperature value: ";
//		cin >> temp;
//		tempValues.push_back(temp);
//		if (tempValues.size() >= 3)
//		{
//			sum = tempValues.back() + (tempValues.back() - 1) + (tempValues.back() - 2);
//			if (sum > 25)
//			{
//				cout << "Warning!\n";
//			}
//		}
//	}
//}

//11

//12

//13