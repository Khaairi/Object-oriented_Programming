/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//library yang digunakan
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

using namespace std;

//deklarasi class CRUD
class CRUD
{
	public:
		//atribut untuk tampungan
		string name;
		string nim;
		string major;
		string faculty;
		int j;

		//constructor (dibuat kosong karena tidak diperlukan untuk diisi)
		CRUD()
		{

		}

		//method untuk menambahkan data (create)
		void add(list<Mahasiswa> *llist)
		{
			//instance object menggunakan class Mahasiswa
			Mahasiswa temp;
			j = 0;

			//inputan untuk data mahasiswa
			cout << "Masukkan Nama:";
			cin >> name;
			cout << "Masukkan NIM:";
			cin >> nim;
			cout << "Masukkan Program Studi:";
			cin >> major;
			cout << "Masukkan Fakultas:";
			cin >> faculty;

			//perulangan sebanyak data dalam list
			for(list<Mahasiswa>::iterator it = (*llist).begin(); it != (*llist).end(); it++)
			{
				//pengecekan jika nim yang diinput sama dengan nim pada list
				//nim digunakan sebagai primary key
				if(nim == it->getNim())
				{
					//print warning bahwa data sudah tersedia
					//variabel j digunakan sebagai penanda
					j = 1;
					cout << "\nTidak dapat menambahkan data, NIM sudah tersedia!" << '\n';
				}
			}

			//jika variabel j tetap nol (artinya tidak ada nim yang sama / data belum tersedia)
			if(j == 0)
			{
				//set data inputan ke object tampungan yang sebelumnya telah dibuat
				temp.setName(name);
				temp.setNim(nim);
				temp.setMajor(major);
				temp.setFaculty(faculty);

				//push object tersebut ke dalam list
				(*llist).push_back(temp);
				cout << "\nData berhasil ditambahkan!" << '\n';
			}
		}

		//method untuk mengubah data (update)
		void update(string nim, list<Mahasiswa> *llist)
		{
			//variabel penanda
			j = 0;

			//perulangan sebanyak data pada list
			for(list<Mahasiswa>::iterator it = (*llist).begin(); it != (*llist).end(); it++)
			{
				//jika nim pada parameter (yaitu nim yang akan diubah) sama dengan nim pada list
				if(nim == it->getNim())
				{
					//inputan untuk data yang akan diubah
					cout << "Masukkan Nama:";
					cin >> name;
					cout << "Masukkan NIM:";
					cin >> nim;
					cout << "Masukkan Program Studi:";
					cin >> major;
					cout << "Masukkan Fakultas:";
					cin >> faculty;

					//set inputan
					it->setName(name);
					it->setNim(nim);
					it->setMajor(major);
					it->setFaculty(faculty);

					cout << "\nData berhasil diubah!" << '\n';

					j = 1;
				}
			}

			//jika variabel j tetap nol (artinya data yang akan diupdate tidak tersedia)
			if(j == 0)
			{
				//print warning bahwa data tidak tersedia
				cout << "\nData tidak tersedia!" << '\n';
			}
		}

		//method untuk menghapus data (delete)
		void del(string nim, list<Mahasiswa> *llist)
		{
			j = 0;

			//perulangan sebanyak data pada list
			for(list<Mahasiswa>::iterator it = (*llist).begin(); it != (*llist).end(); it++)
			{
				//jika nim dari parameter sama dengan nim pada list
				if(nim == it->getNim())
				{
					//hapus data pada list
					it = (*llist).erase(it);
					it--;
					cout << "\nData berhasil dihapus!" << '\n';
					j = 1;
				}
			}

			//jika data tidak tersedia
			if(j == 0)
			{
				cout << "\nData tidak tersedia!" << '\n';
			}
		}

		//method untuk menampilkan data (read)
		void show(list<Mahasiswa> *llist)
		{
			//output dalam bentuk tabel
			cout << "\nList Mahasiswa:\n";
			int i = 0;
			cout << "+=======================================+\n" << "|  Nama  |  NIM  |  Prodi  |  Fakultas  |\n" << "+=======================================+\n";
			for(list<Mahasiswa>::iterator it = (*llist).begin(); it != (*llist).end(); it++)
			{
				cout << "| " <<(i + 1) << ". " << it->getName() << " | " << it->getNim() << " | " << it->getMajor() << " | " << it->getFaculty() << " |\n";
				cout << "+---------------------------------------+\n";
				i++;
			}
		}

		//destructor
		~CRUD()
		{

		}
};