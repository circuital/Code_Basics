#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Default parameter
//float calculateNetSalary(int workedHours, int salary = 120, int vatRate = 30)
//{
//	return (workedHours * salary) * (1 - ((float)vatRate / 100));
//}
//int main()
//{
//	float netSalary1 = calculateNetSalary(10);
//	cout << netSalary1 << "\n";
//	float netSalary2 = calculateNetSalary(10, 130);
//	cout << netSalary2 << "\n";
//	float netSalary3 = calculateNetSalary(10, 130, 35);
//	cout << netSalary3 << "\n";
//}

//Overload
//void minSuperPrint(float f)
//{
//	cout << f << "\n";
//}
//
//void minSuperPrint(const char* c) //VARFÖR CONST???
//{
//	cout << c << "\n";
//}
//
//void minSuperPrint(int i)
//{
//	cout << i << "\n";
//}
//
//int main()
//{
//	minSuperPrint(5);
//	minSuperPrint(5.4321f);
//	minSuperPrint("God day sir!");
//}

//Plussa
//int Summera(int a, int b)
//{
//	return a + b;
//}
//
//int Summera(int a, int b, int c)
//{
//	return a + b + c;
//}
//
//int Summera(int a, int b, int c, int d)
//{
//	return a + b + c + d;
//}
//
//int Summera(int a, int b, int c, int d, int e)
//{
//	return a + b + c + d + e;
//}
//
//float Summera(float a, float b)
//{
//	return a + b;
//}
//
//float Summera(float a, float b, float c)
//{
//	return a + b + c;
//}
//
//float Summera(float a, float b, float c, float d)
//{
//	return a + b + c + d;
//}
//
//float Summera(float a, float b, float c, float d, float e)
//{
//	return a + b + c + d + e;
//}
//
//int main()
//{
//	int sum1 = Summera(1, 2);
//	cout << sum1 << "\n";
//	int sum2 = Summera(1, 2, 3);
//	cout << sum2 << "\n";
//	int sum3 = Summera(1, 2, 3, 4);
//	cout << sum3 << "\n";
//	int sum4 = Summera(1, 2, 3, 4, 5);
//	cout << sum4 << "\n";
//	float sum5 = Summera(1.1f, 2.2f);
//	cout << sum5 << "\n";
//	float sum6 = Summera(1.1f, 2.2f, 3.3f);
//	cout << sum6 << "\n";
//	float sum7 = Summera(1.1f, 2.2f, 3.3f, 4.4f);
//	cout << sum7 << "\n";
//	float sum8 = Summera(1.1f, 2.2f, 3.3f, 4.4f, 5.5f);
//	cout << sum8 << "\n";
//}

//Skriv till fil
//int main()
//{
//	int rows;
//	string fileName;
//	ofstream outFile;
//	cout << "Enter number of rows: ";
//	cin >> rows;
//	cout << "Enter file name: ";
//	cin >> fileName;
//	outFile.open(fileName + ".txt", ofstream::out | ofstream::app);
//	string newLine;
//	for (int i = 0; i < rows; i++)
//	{ 
//		cout << "Enter row " << i + 1 << ": ";
//		if (i == 0)
//		{
//			cin.ignore();
//		}
//		getline(cin, newLine);
//		outFile << newLine << endl;
//	}
//	outFile.close();
//}

//Slå ihop två filer till en tredje
//int main()
//{
//	string fileName1, fileName2, fileName3;
//	ofstream outFile;
//	ifstream inFile1, inFile2;
//	cout << "Enter the first file name: ";
//	cin >> fileName1;
//	cout << "Enter the second file name: ";
//	cin >> fileName2;
//	cout << "Enter the third file name: ";
//	cin >> fileName3;
//	outFile.open(fileName3 + ".txt", ofstream::out | ofstream::app);
//	inFile1.open(fileName1 + ".txt", ifstream::in);
//	string line;
//	while (!inFile1.eof())
//	{
//		getline(inFile1, line);
//		outFile << line << endl;
//	}
//	inFile1.close();
//	inFile2.open(fileName2 + ".txt", ifstream::in);
//	while (!inFile2.eof())
//	{
//		getline(inFile2, line);
//		outFile << line << endl;
//	}
//	inFile2.close();
//	outFile.close();
//}

//Converter
//int main()
//{
//	float kmDistance, mileDistance;
//	cout << "Enter a distance in km: ";
//	cin >> kmDistance;
//	mileDistance = kmDistance / 1.602f;
//	cout << "This equals " << mileDistance << " miles."; 
//}

//Vector - sort
//int main()
//{
//	vector<int> intVector = {2, 16, 20, 4, 6};
//	sort(intVector.begin(), intVector.end());
//	for (int i : intVector)
//	{
//		cout << i << " ";
//	}
//}

//Gissa siffran
//int main()
//{
//	int guess, ans = 78, count = 0;
//	while (true)
//	{
//		cout << "Enter a digit: ";
//		cin >> guess;
//		count++;
//		if (guess < ans)
//		{
//			cout << "Too low!\n";
//		}
//		else if (guess > ans)
//		{
//			cout << "Too high!\n";
//		}
//		else
//		{
//			cout << "Well done! It took you " << count << " guesses!";
//			break;
//		}
//	}
//}

//Gissa siffran del två HJÄLP
//int main()
//{
//	int ans, int count = 0;
//	cout << "Enter a digit between 0 and 100: ";
//	cin >> ans;
//	cout << 
//}

//To lower
//int main()
//{
//	ofstream outFile;
//	ifstream inFile;
//	outFile.open("lower.txt", ofstream::out | ofstream::app);
//	inFile.open("test3.txt", ifstream::in);
//	string line;
//	while (!inFile.eof())
//	{
//		getline(inFile, line);
//		for (char c : line)
//		{
//			c = tolower(c);
//			outFile << c;
//		}
//		outFile << "\n";
//	}
//	inFile.close();
//	outFile.close();
//}

//To lower del två
//int main()
//{
//	ofstream outFile;
//	ifstream inFile;
//	vector <char> vowels = { 'a', 'e', 'i', 'o', 'u', 'y' };
//	outFile.open("upperVowels.txt", ofstream::out | ofstream::app);
//	inFile.open("lower.txt", ifstream::in);
//	string line;
//	while (!inFile.eof())
//	{
//		getline(inFile, line);
//		for (char c : line)
//		{
//			if (find(vowels.begin(), vowels.end(), c) != vowels.end())
//			{
//				c = toupper(c);
//			}
//			outFile << c;
//		}
//		outFile << "\n";
//	}
//	inFile.close();
//	outFile.close();
//}

//Vector drills 1
//int main()
//{
//	vector <int> intVector = { 1, 5, 15, 56, 23 };
//	int max = intVector[0];
//	for (int i : intVector)
//	{
//		if (i > max)
//		{
//			max = i;
//		}
//	}
//	cout << max;
//}

//Vector drills 2
//int main()
//{
//	vector <int> intVector = { 56, 5, 15, 1, 23 };
//	sort(intVector.begin(), intVector.end(), greater<int>());
//	for (int i = 0; i < 3; i++)
//	{
//		cout << intVector[i] << " ";
//	}
//}

//Vector drills 3
//int main()
//{
//	vector <int> intVector = { 1, 5, 15, 56, 23 };
//	sort(intVector.begin(), intVector.end(), greater <int>());
//	cout << intVector[1];
//}

//Vector drills 4
//int main()
//{
//	vector <int> intVector = { 1, 5, 15, 56, 23 };
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	sort(intVector.begin(), intVector.end(), greater<int>());
//	for (int i = 0; i < num; i++)
//	{
//		cout << intVector[i] << " ";
//	}
//}

//Vector drills 5
//int main()
//{
//	vector <int> intVector = { 1, 5, 15, 56, 23 };
//	sort(intVector.begin(), intVector.end());
//	for (int i = 0; i < 2; i++)
//	{
//		cout << intVector[i] << " ";
//	}
//}

//Vector drills 6
//int main()
//{
//	vector <int> intVector = { 1,5,15,56,23 };
//	sort(intVector.begin(), intVector.end());
//	for (int i = 0; i < (intVector.size() - 2); i++)
//	{
//		cout << intVector[i] << " ";
//	}
//}

//Vector drills 7 HJÄLP
//int main()
//{
//
//}





