//Program start
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
#define PI 3.14159
using namespace std;
//global variables declaration
double x, y, radius, radian;
//void main
void main()
{
	//function prototype
	void position(double, double);
	double polar_equation(double, double);
	double cartesian_equation(double, double);
	//variable declaration
	int choice;
	char next;
	char d = '-';
	char t = '*';
	//fixing the decimal places
	cout << setiosflags(ios::fixed) << setprecision(3);
	//main body
	//start do-while loop
	do {
		cout << endl;
		cout << setfill('-') << setw(20) << d;
		cout << setfill('*') << setw(12) << t;
		cout << setfill('-') << setw(20) << d;
		cout << endl;
		cout << "1. Convert Cartesian to Polar coordinates" << endl;
		cout << "2. Convert Polar to Cartesian coordinates" << endl << endl;
		cout << "Please enter your choice, 1 or 2: ";
		cin >> choice;
		cout << endl << endl;
		//enter switch
		//execute the conversion depends on user's choice
		switch (choice)
		{
		case 1:cout << "Converting Cartesian to Polar coordinates" << endl;
			cout << setfill('-') << setw(43) << d << endl;
			//input value
			cout << "Enter x coordinates: ";
			cin >> x;
			cout << endl;
			cout << "Enter y coordinates: ";
			cin >> y;
			cout << endl;
			//compute conversion and location of points
			polar_equation(x, y);
			position(x, y);
			//result
			cout << "Cartesian coordinate (" << x << "," << y << ") is equal to" << endl;
			cout << "Polar coordinate (" << radius << "," << radian << ") ." << endl;
			break;
		case 2: cout << "Converting Polar to Cartesian coordinates" << endl;
			cout << setfill('-') << setw(43) << d << endl;;
			//input value
			cout << "Enter radius: ";
			cin >> radius;
			cout << endl;
			cout << "Enter angle in radian (3 d.p.):";
			cin >> radian;
			cout << endl;
			//r is always positive
			if (radius < 0)
				cout << "Error.Radius is always positive." << endl;
			else {
				//compute conversion and location
				cartesian_equation(radius, radian);
				position(x, y);
				//result
				cout << "Polar coordinate (" << radius << "," << radian << ") is equal to" << endl;
				cout << "Cartesian coordinate (" << x << "," << y << ") ." << endl;
			}
			break;
		default:cout << "Error" << endl;
			break;
		}//end switch
		cout << endl << setfill('-') << setw(20) << d;
		cout << setfill('*') << setw(12) << t;
		cout << setfill('-') << setw(20) << d;
		cout << endl;
		//Ask user whether wants to proceed
		cout << "Do you want to do another conversion?" << endl;
		cout << "Type 'y' for yes;'n' for no: ";
		cin >> next;
		cout << endl;
	} while (next == 'y');//enter loop again if input is 'y'.If not,then exist loop
	//exist the loop
	cout << "Press any key to exit......";
	_getch();
}//end main
//Function of stating the position of point
//a is x and b is y
void position(double a, double b)
{
	if (a == 0 && b == 0)
		cout << "The point is on the origin.\n\n";
	else {
		if (a == 0)
			cout << "The point is on the y-axis.\n\n";
		else {
			if (b == 0)
				cout << "The point is on the x-axis.\n\n";
			else {
				if (a > 0 && b > 0)
					cout << "The point is in the first quadrant.\n\n";
				else {
					if (a < 0 && b>0)
						cout << "The point is in the second quadrant.\n\n";
					else {
						if (a > 0 && b < 0)
							cout << "The point is in the fourth quadrant.\n\n";
						else {
							if (a < 0 && b < 0)
								cout << "The point is in the third quadrant.\n\n";
						}
					}
				}
			}
		}
	}
}//end function
//Function of converting cartesian coordinates to polar coordinates
double polar_equation(double a, double b)
{
	radius = sqrt(pow(a, 2) + pow(b, 2));
	radian = atan(b / a);
	//calculates actual radian under each condition
	if (a == 0 && b == 0)
		radian = 0;
	if (a == 0)
	{
		if (b < 0)
			radian = 3 * PI / 2;
		if (b > 0)
			radian = PI / 2;
	}
	if (b == 0)
	{
		if (a < 0)
			radian = PI;
		if (a > 0)
			radian = 0;
	}
	if (a > 0 && b > 0)
		radian = radian;
	if (a < 0 && b>0)
		radian = PI - radian;
	if (a > 0 && b < 0)
		radian = 2 * PI + radian;
	if (a < 0 && b < 0)
		radian = radian + PI;
	return radius, radian;
}//end function
//Function of converting polar coordinates to cartesian coordinates
//k is radius and z is radian
double cartesian_equation(double k, double z)
{
	if (k == 0)
	{
		x = 0;
		y = 0;
	}
	else {
		if (z == 1.571)
		{
			x = 0;
			y = k * sin(z);
		}
		else {
			if (z == 3.142)
			{
				x = k * cos(z);
				y = 0;
			}
			else {
				x = k * cos(z);
				y = k * sin(z);
			}
		}
	}
	return x, y;
}//end function

