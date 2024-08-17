/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Mahasiswa::Mahasiswa() : Sivitas()
{
	nim = "";
	faculty = "";
	major = "";
}

//inisialisasi constructor dengan parameter (menggunakan supper dengan class Sivitas)
Mahasiswa::Mahasiswa(string nik, string name, string gender, string univ, string email, string nim, string faculty, string major) : Sivitas(nik, name, gender, univ, email)
{
	this->nim = nim;
	this->faculty = faculty;
	this->major = major;
}

//inisialisasi method setter dan getter
void Mahasiswa::setNim(string nim)
{
	this->nim = nim;
}

string Mahasiswa::getNim()
{
	return this->nim;
}

void Mahasiswa::setFaculty(string faculty)
{
	this->faculty = faculty;
}

string Mahasiswa::getFaculty()
{
	return this->faculty;
}

void Mahasiswa::setMajor(string major)
{
	this->major = major;
}

string Mahasiswa::getMajor()
{
	return this->major;
}

//inisialisasi destructor
Mahasiswa::~Mahasiswa()
{
}