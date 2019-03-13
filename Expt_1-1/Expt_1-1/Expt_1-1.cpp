#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main ()
{
	int ticket1, ticket2, ticket3, ticket4;
	int st1, st2, st3, st4;
	int stx1, stx2, stx3, stx4;
	int tix, sale;
	ticket1 = 250.00;
	ticket2 = 100.00;
	ticket3 = 50.00;
	ticket4 = 25.00;
	cout << "Ticket Price:				Ticket/s Sold:" << endl;
	
	cout << "250.00					";
	cin	>> st1;
	cout << "100.00					";
	cin	>> st2;
	cout << "50.00					";
	cin	>> st3;
	cout << "25.00					";
	cin	>> st4;
	cout << "---------------------------------------------" << endl;
	stx1 = ticket1 * st1;
	stx2 = ticket2 * st2;
	stx3 = ticket3 * st3;
	stx4 = ticket4 * st4;
	tix = st1 + st2 + st3 + st4;
	sale = stx1 + stx2 + stx3 + stx4;
	cout << "Number of tickets sold:" << tix <<endl;
	cout << "Sum of sales: " << sale <<endl; 


	_getch ();
	return 0;
}