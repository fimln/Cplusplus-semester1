#include <iostream>
#include <math.h>
using namespace std;

int volumeBalok(int p, int l, int t) {
	int vb = 1;
	vb = p * l * t;
	return vb;
}

int luasPermukaanBalok(int p, int l, int t) {
	int lpb = 1;
	lpb =  2 * ((p * l) + (p * t) + (l * t));
	return lpb;
}

int kelilingBalok(int p, int l, int t) {
	int kb = 1;
	kb = 4 * (p + l + t);
	return kb;
}

void volumeBola(float phi, float r) {
	float vbl = 1;
	vbl = (4 * phi * r * r * r) / 3;
	cout << "Volume Bola : " << vbl << endl;
}

void luasPermukaanBola(float phi, float r) {
	float lpbl = 1;
	lpbl = 4 * phi * r * r;
	cout << "Luas Permukaan Bola : " << lpbl << endl;
}

int main () {
	int p = 1, l = 1, t = 1, r = 1;
	int pilihan, hasil = 1, hasil2 = 1, hasil3 = 1;
	float phi = 3.14;
	cout << "====================================" << endl;
	cout << "||\t\tFUNGSI\t\t  ||" << endl;
	cout << "====================================" << endl;
	cout << "1. Balok" << endl;
	cout << "2. Bola" << endl;
	cout << "Masukkan pilihan :" << endl;
	cin >> pilihan;
	cout << endl;
	if (pilihan == 1) {
		cout << "Masukkan nilai balok" << endl;
		cout << "Panjang : ";
		cin >> p;
		cout << "Lebar : ";
		cin >> l;
		cout << "Tinggi : ";
		cin >> t;
		cout << endl;
		hasil = volumeBalok(p, l, t);
		hasil2 = luasPermukaanBalok(p, l, t);
		hasil3 = kelilingBalok(p, l, t);
		cout << "Volume Balok : " << hasil << endl;
		cout << "Luas Permukaan Balok : " << hasil2 << endl;
		cout << "Keliling Balok : " << hasil3 << endl;
	}
	else if (pilihan == 2) {
		cout << "Masukkan jari-jari lingkaran : ";
		cin >> r;
		volumeBola(phi, r);
		luasPermukaanBola(phi, r);
	}
	else {
		cout << "404 Not Found";
	}
	return 0;
}
