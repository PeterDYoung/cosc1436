#include<iostream>;
using namespace std;
void calcAverage(double, double, double, double, double);
void main(){
	double val1,val2,val3, val4, val5;
	
	cout << "Enter Value 1:";
	cin >> val1;
	cout << "Enter Value 2:";
	cin >> val2;
	cout << "Enter Value 3:";
	cin >> val3;
	cout << "Enter Value 4:";
	cin >> val4;
	cout << "Enter Value 5:";
	cin >> val5;
	calcAverage(val1, val2, val3, val4, val5);
	
	
}
void calcAverage(double val1, double val2, double val3, double val4, double val5) {

	cout << "Average Value: " << (val1 + val2 + val3 + val4 + val5) / 5;
}