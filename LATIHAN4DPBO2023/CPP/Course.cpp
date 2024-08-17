/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Course::Course()
{
	namaMatkul = "";
}

//inisialisasi constructor dengan parameter
Course::Course(string namaMatkul, Dosen dosen, Mahasiswa mahasiswa)
{
	this->namaMatkul = namaMatkul;
	this->mahasiswa.push_back(mahasiswa);
	this->dosen = dosen;
}

//inisialisasi method setter dan getter
void Course::setNamaMatkul(string namaMatkul)
{
	this->namaMatkul = namaMatkul;
}

string Course::getNamaMatkul()
{
	return this->namaMatkul;
}

void Course::setMahasiswa(Mahasiswa mahasiswa)
{
	this->mahasiswa.push_back(mahasiswa);
}

list<Mahasiswa> Course::getMahasiswa()
{
	return this->mahasiswa;
}

void Course::setDosen(Dosen dosen)
{
	this->dosen = dosen;
}

Dosen Course::getDosen()
{
	return this->dosen;
}

//inisialisasi destructor
Course::~Course()
{
}