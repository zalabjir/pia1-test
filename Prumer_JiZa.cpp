#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main () {

    int i, size = 0;
    string cont;
	float sum = 0.0, avg;
	float x [size];
	
	
	do {
		
		cout << "Chcete zadat cislo? a - ANO, n - NE." << endl;
	    cin >> cont;
	    
	  if (cont == "n"){
	  	break;	
	  }	
	  
	  else {
	
		cout << "Zadejte cislo: ";
		cin >> x [i];
		sum += x [i];
		++i;
		size = i;
	
	  } 
	
	} while (cont == "a");

	
	avg = sum/size;
	
	cout << "Velikost pole cisel = " << size << endl;
	cout << "Prumerna hodnota = " << avg << endl;
	
	return 0;
	
}
