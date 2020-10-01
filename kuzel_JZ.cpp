#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main () {
	
	const double pi = 3.14159265358979323846;
	
	cout << "Ahoj." << endl;
	
	double r;
	double v;
	
	cout << "Zadejte polomer podstavy kuzele v cm: ";
	cin >> r;
	cout << "Zadejte vysku kuzele v cm: ";
	cin >> v;
	
	double objem = 1.0/3.0*pi*r*r*v;
	double povrch = pi*r*(r+sqrt(r*r+v*v));
	
	cout << "Objem zadaneho kuzele V = " << objem << " cm3" << endl;
	cout << "Povrch zadaneho kuzele S = " << povrch << " cm2" << endl;
	
}
