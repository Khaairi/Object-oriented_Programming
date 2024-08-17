/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//import library
#include <bits/stdc++.h>
#include "Pilih.cpp"

using namespace std;

int main()
{
	//instance object menggunakan class Pilih
	Pilih pilihan;
	//deklarasi list
	list<Mahasiswa> llist;
	int n = 0;
	//menu pilihan
	//perulangan selama inputan pemilihan menu bukan 3 
	do
	{
		//masukkan untuk pilihan menu
		cout << "\nMasukkan menu (1 : Input, 2 : Tampil, 3 : Keluar):" << '\n';
		cin >> n;
		//pengecekan pilihan
		if(n != 3)
		{
			//pilihan 1 untuk menambahkan data
			if(n == 1)
			{
				pilihan.add(&llist);
			}

			//pilihan 2 untuk menampilkan data
			if(n == 2)
			{
				pilihan.show(&llist);
			}
		}
	}while(n != 3);
}