#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
double NumTicketPrem, NumTicketSide, NumTicketBox, NumTicketGenAd;
double PricePrem = 250, PriceSide = 100, PriceBox = 50, PriceGenAd = 25;
double totalPricePrem, totalPriceSide, totalPriceBox, totalPriceGenAd;

cout << "Input the number of Tickets Sold for:" << endl;
cout << "Premium: ";
cin >> NumTicketPrem;
cout << "Sideline: ";
cin >> NumTicketSide;
cout << "Box: ";
cin >> NumTicketBox;
cout << "General Admission: ";
cin >> NumTicketGenAd;
cout << endl;

cout << "--------------------------------------------------------------------------" << endl << endl;

cout << "\t\t\tTicket Price" << "\t\tNumber of tickets sold" << endl;
cout << "Premium:" << "\t\t$250" << "\t\t\t" << NumTicketPrem << endl;
cout << "Sideline:" << "\t\t$100" << "\t\t\t" << NumTicketSide << endl;
cout << "Box:" << "\t\t\t$50" << "\t\t\t" << NumTicketBox << endl;
cout << "General Admission:" << "\t$25" << "\t\t\t" << NumTicketGenAd << endl << endl;

cout << "--------------------------------------------------------------------------" << endl << endl;

cout << fixed << showpoint << setprecision(2);
cout << "\t\tNumber of tickets sold for: " << "\t\tTotal amount:" << endl;
cout << "Premium:" << "\t" << NumTicketPrem << "\t\t\t\t\t$" << NumTicketPrem * PricePrem << endl;
cout << "Sideline:" << "\t" << NumTicketSide << "\t\t\t\t\t$" << NumTicketSide * PriceSide << endl;
cout << "Box:" << "\t\t" << NumTicketBox << "\t\t\t\t\t$" << NumTicketBox * PriceBox << endl;
cout << "Gen. Ad.:" << "\t" << NumTicketGenAd << "\t\t\t\t\t$" << NumTicketGenAd * PriceGenAd << endl;

totalPricePrem = NumTicketPrem * PricePrem;
totalPriceSide = NumTicketSide * PriceSide;
totalPriceBox = NumTicketBox * PriceBox;
totalPriceGenAd = NumTicketGenAd * PriceGenAd;

cout << "\t\t\t\t\t\t\t------------" << endl;
cout << "\t\t\t\t\t\t\t$" << totalPricePrem + totalPriceSide + totalPriceBox + totalPriceGenAd;

getch();
return 0;
}
