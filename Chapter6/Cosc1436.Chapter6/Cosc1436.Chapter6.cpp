// This progam calculates the user's available credit.
#include <iostream>
using namespace std;


void calcAvailCredit(double, double); //prototype
/*int main()
{
	//double maxCredit, usedCredit, availCredit;
	double maxCredit, usedCredit;
	// Get user maxCredit.
	cout << "Enter max credit" << endl;
	cin >> maxCredit;
	// Get user usedCredit.
	cout << "Enter credit used" << endl;
	cin >> usedCredit;
	calcAvailCredit(maxCredit, usedCredit);
	// Calculate available credit.
	// availCredit = maxCredit ­ usedCredit;
	// Display user's available credit.
	//cout << "Your available credit is $" << availCredit << endl;
	system("pause");
	return 0;
}*/
void calcAvailCredit(double maxCredit, double usedCredit)
{
	
	/*Calculate available credit.
		53
		54
		55
		56
		
	Display user's available credit.*/
	cout << "Your available credit is $" << maxCredit-usedCredit << endl;
}
int main(){
	 double maxCredit, usedCredit, availCredit;
	 // Get user maxCredit.
	 cout << "Enter max credit" << endl;
	 cin >> maxCredit;
	 // Get user usedCredit.
	 cout << "Enter credit used" << endl;
	 cin >> usedCredit;
	 // Calculate available credit.
	 //availCredit = maxCredit - usedCredit;
	 // Display user's available credit.
	 //cout << "Your available credit is $" << availCredit << endl;
	 calcAvailCredit(maxCredit, usedCredit);
	 return 0;
}