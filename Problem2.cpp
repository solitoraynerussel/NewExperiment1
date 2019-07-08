#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
double mass, density, volume;

cout << "VOLUME CALCULATOR!" << endl << endl;

cout << "Input the mass(in grams): ";
cin >> mass;
cout << "Input the density(in g/cm^3): ";
cin >> density;

cout << fixed << showpoint << setprecision(2);
cout << "The volume is: " <<(mass/4) / density << " cm^3";


getch();
return 0;
}
