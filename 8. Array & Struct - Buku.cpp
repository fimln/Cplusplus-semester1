#include <iostream>
#define max 100
using namespace std;

struct buku {
	string kode;
	string judul;
	int harga;
};
int main () {
	int jumlahbuku, total;
	int nomorbuku[max];
	cout << "Masukkan jumlah buku : "; cin >> jumlahbuku; cout << endl;
	cout << "===== Input Data Buku =====" << endl;
	buku a[max];
	for (int x=0; x<jumlahbuku; x++) {
	int y = x+1;
	nomorbuku[x] = y;
	cout << "Buku ke-" << y << endl;
	cout << "\tMasukkan kode buku\t: "; cin >> a[x].kode;
 	cout << "\tMasukkan judul buku\t: ";
 	cin.ignore();
	getline(cin,a[x].judul);
 	cout << "\tMasukkan harga buku\t: "; cin >> a[x].harga;
	total=total+a[x].harga;
	}
	cout << endl;
	cout << "===== Data Buku =====" << endl;
	for (int x=0; x<jumlahbuku; x++) {
	cout<< "Buku ke-"<< nomorbuku[x] <<endl;
	cout<< "Kode Buku\t: "<< a[x].kode<<endl;
	cout<< "Judul Buku\t: "<< a[x].judul<<endl;
	cout<< "Harga Buku\t: "<< a[x].harga<<endl;
	cout<<endl;
	}
	cout << "Total Harga Buku : " << total << endl;
	return 0;
}
