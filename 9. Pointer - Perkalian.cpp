#include <iostream>
using namespace std;

void perkalian (int *xpntr, int *ypntr, int x, int y) {
	cout << "==========Perkalian==========" << endl;
	cout << "Alamat X : " << xpntr << endl;
	cout << "Alamat Y : " << ypntr << endl;
	cout << "Nilai X : " << x << endl;
	cout << "Nilai Y : " << y << endl;
	int kali = x*y;
	cout << "Perkalian X dan Y : " << kali << endl;
}
int main () {
	int x, y;
	cout << "X : "; cin >> x;
	cout << "Y : "; cin >> y;
	cout << "&X : " << &x << endl;
	cout << "&Y : " << &y << endl;
	perkalian(&x, &y, x, y);
	return 0;	
}
