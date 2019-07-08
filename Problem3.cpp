#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
double averageDailyBalance, netBalance, payment, d1, d2, interest;
const double interestRate = 0.0097;

cout << "INTEREST CALCULATOR!!!" << endl << endl;
cout << "Input your Net Balance: ";
cin >> netBalance;
cout << "Input your payment: ";
cin >> payment;
cout << "Input the number of days in the billing cycle: ";
cin >> d1;
cout << "Input the number of days payment is made before the billing cycle: ";
cin >> d2;

averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
interest = averageDailyBalance * interestRate;

cout << endl;
cout << fixed << showpoint << setprecision(3);
cout << "The interest is P" << interest;

getch();
return 0;
}

