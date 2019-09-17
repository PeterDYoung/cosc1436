/* cosc1436.Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there
*  Peter Young 
*/

#include <iostream>
#include <iomanip>
using namespace std;

//part 2
void main() {

	float price1, price2;		// The price of 2 items
	int	quantity1, quantity2;	// The quantity of 2 items

	cout << setprecision(2) << fixed << showpoint;
	
	cout << "enter quantitiy1: ";
	cin >> quantity1;
	cout << "enter price1: " ;
	cin >> price1;

	cout << "enter quantitiy2: ";
	cin >> quantity2;
	cout << "enter price2: ";
	cin >> price2;

	// Fill in the input statement that reads in price2 and
	// quantity2 from the keyboard.

	cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";

	// Fill in the output statement that prints the  price
	// and quantity. Be sure to use setw() statements.
	cout << setw(15) << price1 << setw(12) << quantity1<<"\n";
	cout << setw(15) << price2 << setw(12) << quantity2;
	

}
//part 1
int part1(){

	int	quantity;		// contains the amount of items purchased 
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.
	cout << setprecision(2) << fixed << showpoint;
	//cout << setprecision(2) << showpoint; //scientific notation XeY to 2 decimal
	//cout << setprecision(4) << fixed << showpoint; //4 decimal place	

	cout << "input number of items:";
	cin >> quantity;
	
	cout << "input item price: ";
	cin >> itemPrice;
	
	cout << "Total price: " << itemPrice * quantity;


	return 0;
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
