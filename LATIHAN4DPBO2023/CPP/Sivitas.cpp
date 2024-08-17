/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Sivitas::Sivitas() : Human()
{
	univ = "";
	email = "";
}

//inisialisasi constructor dengan parameter (menggunakan supper dengan class Human agar dapat memasukkan valuenya ke parameter)
Sivitas::Sivitas(string nik, string name, string gender, string univ, string email) : Human(nik, name, gender)
{
	this->univ = univ;
	this->email = email;
}

//inisialisasi method setter dan getter
void Sivitas::setUniv(string univ)
{
	this->univ = univ;
}

string Sivitas::getUniv()
{
	return this->univ;
}


void Sivitas::setEmail(string email)
{
	this->email = email;
}

string Sivitas::getEmail()
{
	return this->email;
}

//inisialisasi destructor
Sivitas::~Sivitas()
{
}