// Area.cpp
/*
	Calculate basic Area
	based on the shape chosen
*/

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

double areaSquare()
{
	double s = 0;
	cout << "Enter length of side (s):" << endl;
	cin >> s;

	return s * 4;
}

double areaCircle()
{
	const double PI = 3.141592653589793238463;
	double radius;

	cout << "Enter radius(r):" << endl;
	cin >> radius;
	
	return pow(PI * radius, 2);
}

double areaTriangle()
{
	double base;
	double height;

	cout << "Enter height(h):" << endl;
	cin >> height;
	cout << "Enter base(b):" << endl;
	cin >> base;

	return (height * base) / 2;
}

int main()
{
	unsigned char choice;
	string prompt = "Choose a shape:\n1. Square\n2. Circle\n3. Triangle";

	printf("%s\n", prompt.c_str());

	cin >> choice;

	switch (choice)
	{
	case '1':
		printf("Area of the Square: %0.2f\n", areaSquare());
		break;
	case '2':
		printf("Area of the Circle: %0.2f\n", areaCircle());
		break;
	case '3':
		printf("Area of the Triangle: %0.2f\n", areaTriangle());
		break;
	default: break;
	}

	return 0;
}