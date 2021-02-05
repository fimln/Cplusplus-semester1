#include <iostream>
#include "7C. Rumus Balok.h"
using namespace std;

int main () {
	int p, l, t;
	cout << "Masukkan panjang balok : " << endl;
	cin >> p;	
	cout << "Masukkan lebar balok : " << endl;
	cin >> l;
	cout << "Masukkan tinggi balok : " << endl;
	cin >> t;
	cout << "Volumenya adalah : " << volumeBalok(p,l,t) <<endl;
	cout << "Luas Permukannya adalah : " << luasPermukaanBalok(p,l,t) <<endl;
	cout << "Kelilingnya adalah : " << kelilingBalok(p,l,t) <<endl;

return 0;	
}
