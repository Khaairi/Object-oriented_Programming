/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//import library
#include <bits/stdc++.h>
#include "Human.cpp"

using namespace std;

//inisialisasi class Pilih
class Pilih
{
	public:
		//atribut sebagai tempat tampung inputan
		string nik, name, gender, univ, email, nim, faculty, major;
		int j;

		//constructor
		Pilih()
		{
		}

		//method untuk menambahkan data
		void add(list<Mahasiswa> *llist)
		{
			//instance object menggunakan class Mahasiswa
			Mahasiswa temp;
			j = 0;

			//inputan untuk data mahasiswa
			cout << "Masukkan NIK:";
			cin >> nik;
			cout << "Masukkan Nama:";
			cin >> name;
			cout << "Masukkan Jenis Kelamin:";
			cin >> gender;
			cout << "Masukkan Asal Universitas:";
			cin >> univ;
			cout << "Masukkan Email Universitas:";
			cin >> email;
			cout << "Masukkan NIM:";
			cin >> nim;
			cout << "Masukkan Fakultas:";
			cin >> faculty;
			cout << "Masukkan Program Studi:";
			cin >> major;

			//perulangan untuk pengecekan
			for(list<Mahasiswa>::iterator it = (*llist).begin(); it != (*llist).end(); it++)
			{
				//pengecekan jika nik yang diinput sama dengan nik pada list
				//nik digunakan sebagai primary key
				if(nik == it->getNik())
				{
					//print warning bahwa data sudah tersedia
					//variabel j digunakan sebagai penanda
					j = 1;
					cout << "\nTidak dapat menambahkan data, NIK sudah tersedia!" << '\n';
				}
			}

			//jika data tidak tersedia
			if(j == 0)
			{
				//set data inputan ke object tampungan yang sebelumnya telah dibuat
				temp.setNik(nik);
				temp.setName(name);
				temp.setGender(gender);
				temp.setUniv(univ);
				temp.setEmail(email);
				temp.setNim(nim);
				temp.setFaculty(faculty);
				temp.setMajor(major);

				//push object tersebut ke dalam list
				(*llist).push_back(temp);
				cout << "\nData berhasil ditambahkan!" << '\n';
			}
		}

		//method untuk menampilkan data
		void show(list<Mahasiswa> *llist)
		{
			//output
			cout << "\nList Mahasiswa:\n";
			cout << "========================================\n";
			int i = 0;
			for(list<Mahasiswa>::iterator it = (*llist).begin(); it != (*llist).end(); it++)
			{
				cout << (i+1) << ".\n";
				cout << "NIK               : " << it->getNik() << "\n";
				cout << "Nama              : " << it->getName() << "\n";
				cout << "Jenis Kelamin     : " << it->getGender() << "\n";
				cout << "Asal Universitas  : " << it->getUniv() << "\n";
				cout << "Email Universitas : " << it->getEmail() << "\n";
				cout << "NIM               : " << it->getNim() << "\n";
				cout << "Fakultas          : " << it->getFaculty() << "\n";
				cout << "Program Studi     : " << it->getMajor() << "\n";
				cout << "----------------------------------------\n";
				i++;
			}
		}

		//destructor
		~Pilih()
		{
		}
};