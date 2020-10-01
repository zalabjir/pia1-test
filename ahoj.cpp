#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main (){
	
	int a = 22;
	
	double b = 4.50000000;
	double c = 4.5000000000001;
	double d = c - b;
	
	bool e = c >= b;
	
	char f[5] = {'a','h','o','j'};
	
	double x[3] = {1.5, 2.0, 1.5};
	
	char jmeno[] = "Jirka";
	
	string prijmeni = "Zalabak";
	
	cout << "Ahoj." << " " << jmeno << " " << prijmeni << endl;
	cout << "Delka prijmeni: " << prijmeni.length() << " znaku" << endl;
	cout << "Zadejte nove prijmeni: ";
	cin >> prijmeni;
	cout << "Nove prijmeni: " << prijmeni << endl;
	cout << "Zadejte vek: ";
	
	unsigned int vek;
	cin >> vek;
	cout << "Vek = " << vek << endl;
	
	// Vystup do souboru
	ofstream soubor;
	soubor.open("soubor.txt", ios::out);
	
	soubor << jmeno << prijmeni << endl;
	soubor << "Vek = " << vek;
	
	soubor.close();
	
	return 0;
}
