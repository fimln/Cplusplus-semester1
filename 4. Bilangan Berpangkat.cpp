#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main () {
	int a;
	int p;
	int x;
	int y;
	string gg;
	
	cout << "==================================" << endl;
	cout << "||\tBILANGAN BERPANGKAT\t||" << endl;
	cout << "==================================" << endl;
	cout << "Masukkan nilai A : ";
	cin >> a;
	cout << "Masukkan pangkat : ";
	cin >> p;
	cout << " - - PROSES MENGHITUNG - - " << endl;
	cout << "Hasil" << endl;
	
	for ( x = 0; x < p; x++ ) {
        cout << a << " x ";
	}
	cout << a << " = ";
	y = pow(a,p);
	cout << y << endl;
   
	if (y%2 == 0) {
			gg = "genap";
	}
	else {
		gg = "ganjil";
	}
	
	cout << "==================================" << endl;
	cout << "Dan "<<y<<" termasuk bilangan "<<gg<<"";
}
