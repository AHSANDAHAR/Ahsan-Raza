#include <iostream>
using namespace std;
double average(double, double, double);
double average1;
int main()
{
	double num1, num2, num3;
	cout << "Enter the First number :";
	cin >> num1;
	cout << "Enter the Second number :";
	cin >> num2;
	cout << "Enter the Third number :";
	cin >> num3;
	average(num1, num2, num3);
	cout << "Average of the numbers u entered is :" << average1;
	return 0;
}
double average(double num1, double num2, double num3)
{
	int total = 0;
	total = num1 + num2 + num3;
	average1 = static_cast<double>(total) / 3;
	return average1;
}