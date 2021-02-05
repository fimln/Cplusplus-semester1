#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int a, j, k, i;
	cout << "Masukkan Nilai Tengah = ";
	cin >> a;
	for (int i = 1; i < a*2; i++) {
		for (int j = 1; j <= a*2; j++) {
			if (i==j || i + j == a*2) {
				if (j > a) {
					cout << (a-(j-a));}
				else {
				cout << j;}
			}
		else
		{cout << " ";}
		}
	cout << endl;
	}
}
