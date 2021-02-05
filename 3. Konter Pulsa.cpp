#include <iostream>
#include <stdlib.h>
using namespace std; // digunakan untuk mengganti std::

int main(){
	int ju; //jumlah uang
	int total1, total2; // int-> integer dimana integer itu digunakan untuk mendeklarasikan variabel yang berbau angka tanpa pecahan atau koma alias angka bulat
	int pilihan; //int itu menggunakan memori ram lebih banyak dari char
	int paket; //float itu digunakan ketika teman teman membutuhkan angka koma atau pecahan
	char ulang; //string itu digunakan untuk mendeklarasikan huruf
	char tes2; // char -> character itu digunakan untuk mendeklarasikan 1 huruf saja
	char belilagi;
	Pertanyaan :
	cout<<"Masukkan Jumlah Uang : ";
	cin>>ju;
	cout<<"Jumlah Uang Anda ["<<ju<<"]"<<endl;
	
	cout<<"Apakah Anda Yakin Uang Anda Benar (Y/N)? ";
	cin>>ulang;
	if(ulang=='Y' || ulang=='y'){ // == -> ya sama dengan, || itu berarti atau, <= berarti kurang dari sama dengan, >= berarti lebih dari sama dengan
		system("cls"); //system cls digunakan untuk menghapus seluruh bagian layar (cls -> clearscreen)
		tanya :
		cout<<"Apakah Anda Akan Beli Pulsa?"<<endl;
		cout<<"1. Ya Tentu Saja"<<endl;
		cout<<"2. Tidak"<<endl;
		cout<<"Jawaban Anda : ";
		cin>>paket;
		switch(paket){		// switch itu pasangannya case, jangan lupa ketika menggunakan case diakhiri dengan break;
			case 1 :	// break berfungsi untuk menhentikan jalannya program
				sini : // loncatan goto ke bagian ini
				system("cls");
				cout<<"Jumlah Uang Anda ["<<ju<<"]"<<endl;
				cout<<"beli pulsa bik"<<endl;
				cout<<endl;
				cout<<"1. 10.000"<<endl;
				cout<<"2. 20.000"<<endl;
				cout<<"Masukkan Pilihan Anda : ";
				cin>>pilihan;
				if(pilihan==1){
					total1=10000;
					if(ju>=total1){
					system("cls");
					cout<<"Anda berhasil membeli pulsa"<<endl;
					cout<<"Kembalian = Rp. "<<ju-total1<<endl;
					cout<<endl;
					cout<<"Terima Kasih dan Datang Kembali";	
					}else{
						system("cls");
						cout<<"Uang anda kurang"<<endl;
						cout<<"Apakah anda ingin membeli lagi (Y/N)?";
						cin>>belilagi;
						if(belilagi=='Y' || belilagi=='y'){
						system("cls");
							goto sini; // goto digunakan untuk meloncat pada bagian tertentu, pada kasus ini loncatnya ke bagian sini
							break;	
						}else if(belilagi=='N' || belilagi=='n'){
							system("cls");
							cout<<"Terima Kasih";
						}else{
							system("cls");
						cout<<"Error 404";
						}
					}
				}else if(pilihan==2){
					total2=20000;
					if(ju>=total2){
					system("cls");
					cout<<"Anda berhasil membeli pulsa"<<endl;
					cout<<"Kembalian = Rp. "<<ju-total2<<endl;
					cout<<endl;
					cout<<"Terima Kasih dan Datang Kembali"<<endl;
					break;	
					}else{
						system("cls");
						cout<<"Uang anda kurang"<<endl;
						cout<<"Apakah anda ingin membeli lagi (Y/N)?";
						cin>>belilagi;
						if(belilagi=='Y' || belilagi=='y'){
						system("cls");
							goto sini;
							break;	
						}else if(belilagi=='N' || belilagi=='n'){
							system("cls");
							cout<<"Terima Kasih";
						}else{
							system("cls");
						cout<<"Error 404";
						}
					}
				}
			case 2 :
				cout<<"Apakah Anda Yakin (Y/N) ?";
				cin>>tes2;
				if(tes2=='Y' || tes2=='y'){
					system("cls");
					cout<<"Sampai Jumpa lain Kali";
					break;	
				}else {
					system("cls");
					goto Pertanyaan;	
				}	
		}
	}else if(ulang=='N' || ulang=='n'){
		system("cls");
		goto Pertanyaan;
	}else{
		system("cls");
		cout<<"Error 404 deh kak";
	}
	 return 0;
	}
	
	//if else itu satu pasangan
	// if itu digunakan untuk kondisi pertama
	//else if digunakan untuk kondisi kedua atau seterusnya
	// else digunakan untuk kondisi sisa selain kondisi pertama dan kedua atau seterusnya

