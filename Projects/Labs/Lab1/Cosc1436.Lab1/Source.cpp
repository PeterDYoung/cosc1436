#include<iostream>


using namespace std;
 
void main(){
		

	double price, taxRate;

	cout << "Enter price: ";
	cin >> price;
	cout << "Enter tax rate in decimal form: ";
	cin >> taxRate;
	cout << "Total sales tax: " << taxRate*price;
	cout << "\nTotal price: " << (taxRate+1)*price;
	
}

