// Cosc1436.Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void batavg() {
	const int AT_BAT = 421;
	const int HITS = 123;
	double batAvg;

	batAvg = 1.0*HITS / AT_BAT;									// an assignment statement
	cout << "The batting average is " << batAvg << endl;	// output the result
}
void rightTrig(){
	float a, b;	// the smaller two sides of the triangle 
	//float hyp;	// the hypotenuse calculated by the program

	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

	// Fill in the assignment statement that determines the hypotenuse

	cout << "The sides of the right triangle are " << a << " and " << b << endl;

	cout << "The hypotenuse is " << round(hypot(a,b)*100)/100.0 << endl;
}
int main()
{	
	cout << "rightrig output:\n";
	rightTrig();
	cout << "batavg output\n";
	batavg();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
