#include <iostream>
#include "7D. Rumus Kerucut.h"
using namespace std;

int main () {
	int d, t;
	cout << "Masukkan diameter kerucut : ";
	cin >> d;
	cout << "Masukkan tinggi kerucut : ";
	cin >> t;
	cout << "Volume kerucut : " << volumeKerucut(d,t) << endl;
	return 0;
}
