/* Brittney Tollison
01/05/2021
Assignment - Using References to hack and Bankrupting the terrorists */


#include <iostream>
#include <string>

using namespace std;

void regularTransaction(int x, int y);
void hackedTransaction(int& x, int& y);

int main()
{
	int joesCoffeeShopFunds =360;
	int terroristFunds = 9000000;
	//Print the original funds and balance for both accounts.
	cout << "Welcome, Joe's Coffee Shop. Your current balance is $" << joesCoffeeShopFunds <<endl;
	cout << "Welcome, Terrorist. Your current balance is $" << terroristFunds <<endl <<endl;
	//Calls the normalTransaction  and Print the funds and balance showing this normal transaction should change nothing.
	cout << "Normal transaction initiated! " <<endl;
	regularTransaction(terroristFunds, joesCoffeeShopFunds);
	cout << "Transaction completed Joe's Coffee Shop. Your current balance is $" << joesCoffeeShopFunds << endl;
	cout << "Transaction completed Terrorist. Your current balance is $" << terroristFunds << endl << endl;
	//Calls the hackedTransaction and then displays the swap balances
	cout << "Hacked transaction initiated!" <<endl;
	hackedTransaction(terroristFunds,joesCoffeeShopFunds);
	cout << "Transaction completed Joe's Coffee Shop. Your current balance is $" << joesCoffeeShopFunds << endl;
	cout << "Transaction completed Terrorist. Your current balance is $" << terroristFunds << endl <<endl;
	return 0;
}
//Create two functions to check bank balances, one normal balance check transaction, and one balance check hacked transaction
void regularTransaction(int x, int y)
{
	int num = x;
	x = y;
	y = num;
}
void hackedTransaction(int& x, int& y)
{
	int num = x;
	x = y;
	y = num;
}