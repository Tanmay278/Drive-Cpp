#include<iostream>
using namespace std;
#include<stdlib.h>
class Account
{
	string customerName,typeOfAcc,accNo;
	int Balance;
	public:
		Account(string, string, string, int);
		void withdraw();
		void deposit();
		void showBalance();
};
main()
{
	string name, type,acc;
	int bal;
	cout << "Enter the Customer Name : ";
	cin >> name;
	cout << "Enter the Account Number : ";
	cin >> acc;
	cout << "Enter the Type of Account : ";
	cin >> type;
	cout << "Enter the Balance : ";
	cin >> bal;
	Account ob(name, acc, type, bal);
	while(1){
		cout<<"Enter: \n1.Withdraw \n2.Deposit \n3.Show Balance \n4.Exit \n";
		int j=0;
		cin >> j;
		switch(j){
			case 1 : ob.withdraw();break;
			case 2 : ob.deposit();break;
			case 3 : ob.showBalance();break;
			case 4 : cout<<"Thank You\n";exit(0);break;
			default: cout << "Enter number in between 1 & 4\n";
		}
	}
}

Account  ::  Account(string a, string b, string c, int d){
	customerName = a;
	accNo = b;
	typeOfAcc = c;
	Balance = d;
}

void Account :: withdraw(){
	int a;
	cout << "Enter amount to withdraw: ";
	cin >> a;
	if(this -> Balance-a<1000)
	cout<<"Balance cannot be withdrawn from the account\n";
	else
	{
	if (a > this -> Balance)
		cout << "You don't that amount in Balance.  ";
	else
		Balance = Balance - a;
	}
}

void Account :: deposit(){
	int a;
	cout << "Enter amount to deposit: ";
	cin >> a;
	this -> Balance = this -> Balance + a;
}

void Account :: showBalance(){
	cout << "Balance : " << this ->Balance << endl;
}

