#include <iostream>
#include <stdlib.h>
using namespace std;

main ()
{
	string nik, nama, ttl, jenis, gol, alamat, rtrw, kel, kec, agama, kawin, kerja, warga, masa;
	
	cout << "\t \tMasukkan Data Diri Anda\n";
	cout << "Masukkan NIK\t \t \t: "; cin >> nik;
		cin.ignore ();
	cout << "Masukkan Nama\t \t \t: "; getline(cin,nama);
	cout << "Masukkan TTL\t \t \t: "; getline(cin,ttl);
	cout << "Masukkan Jenis Kelamin\t \t: "; getline(cin,jenis);
	cout << "Masukkan Golongan Darah\t \t: "; cin >> gol;
		cin.ignore ();
	cout << "Masukkan Alamat\t \t \t: "; getline(cin,alamat);
	cout << "Masukkan RT/RW\t \t \t: "; getline(cin,rtrw);
	cout << "Masukkan Kelurahan/Desa\t \t: "; getline(cin,kel);
	cout << "Masukkan Kecamatan\t \t: "; getline(cin,kec);
	cout << "Masukkan Agama\t \t \t: "; getline(cin,agama);
	cout << "Masukkan Status Kawin\t \t: "; getline(cin,kawin);
	cout << "Masukkan Pekerjaan\t \t: "; getline(cin,kerja);
	cout << "Masukkan Kewarganegaraan\t: "; getline(cin,warga);
	cout << "Masukkan Masa Berlaku\t \t: "; getline(cin,masa);
	
	system("pause");
	system("cls");
	
	cout << "+";
	for (int column = 0; column < 68; ++column)
    {
        cout << "=";
    }
    cout << "+";
    cout << "\n";
    
    cout << "||\t\t\tPROVINSI SUMATERA BARAT\t\t\t    ||"<< endl ;
    cout << "||\t\t\tKOTA PADANG\t\t\t||" << endl ;
    cout << "||NIK\t \t \t: " << nik;
	cout << "\t\t\t    ||" << endl ;
    cout << "||Nama\t \t \t: " << nama;
	cout << "\t\t\t    ||" << endl ;
    cout << "||Tempat/Tgl Lahir\t: " << ttl;
	cout << "\t\t    ||" << endl ;
    cout << "||Jenis Kelamin \t: " << jenis;
	cout << "\tGol. Darah\t: " << gol;
	cout << "\t    ||" << endl ;
    cout << "||Alamat\t \t: " << alamat;
	cout << "\t\t\t    ||" << endl ;
    cout << "||\t RT/RW\t \t: " << rtrw;
	cout << "\t\t\t\t    ||" << endl ;
    cout << "||\t Kel/Desa\t: " << kel;
	cout << "\t\t\t\t    ||" << endl ;
    cout << "||\t Kecamatan \t: " << kec;
	cout << "\t\t\t\t    ||" << endl ;
    cout << "||Agama\t \t \t: " << agama;
	cout << "\t\t\t\t\t    ||" << endl ;
    cout << "||Status Perkawinan\t: " << kawin;
	cout << "\t\t\t\t    ||" << endl ;
    cout << "||Pekerjaan\t \t: " << kerja;
	cout << "\t\t\t    ||" << endl ;
    cout << "||Kewarganegaraan \t: " << warga;
	cout << "\t\t\t\t\t    ||" << endl ;
    cout << "||Berlaku Hingga\t: " << masa;
	cout << "\t\t\t\t    ||" << endl ;

    cout << "+";
	for (int column = 0; column < 68; ++column)
    {
        cout << "=";
    }
    cout << "+";
    cout << "\n";
    
	return 0;
}


