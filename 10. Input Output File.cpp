#include <iostream>
#include <fstream>
using namespace std;

int main () {
	int perintah;
	awal :
	cout << "===== AKSES FILE =====" << endl;
	cout << "1. Input" << endl;
	cout << "2. Output" << endl;
	cout << "3. Keluar" << endl;
	cout << "Masukkan perintah : "; cin >> perintah;

	if (perintah == 1) {
		cout << "Masukkan teks : " << endl;
		
		string isifile;
		ofstream file;
		
		file.open("tes.txt");
		cin.ignore();
		getline(cin,isifile);
		file << isifile;
		file.close();
		
		system("cls");	
		goto awal;
	}
	
	else if (perintah == 2) {
		cout << "===== ISI FILE =====" << endl;
		cout << endl;
		
		string muncul;
		ifstream file;
		file.open("tes.txt");
		
		if (file.is_open()) {
			while (getline(file,muncul)) {
				cout << muncul << endl;
			}
			file.close();
		}
		else {
		cout << "Au ah gelap";
		}
		
		system("pause");
		system("cls");	
		goto awal;
	}
	
	else {
	cout << "Terima Kasih!" << endl;
	return 0;
	}
}


