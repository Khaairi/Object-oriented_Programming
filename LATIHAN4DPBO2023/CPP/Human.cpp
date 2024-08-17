/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Human::Human()
{
	nik = "";
	name = "";
	gender = "";
}

//inisialisasi constructor dengan parameter
Human::Human(string nik, string name, string gender)
{
	this->nik = nik;
	this->name = name;
	this->gender = gender;
}

//inisiliasasi method setter dan getter
void Human::setNik(string nik)
{
	this->nik = nik;
}

string Human::getNik()
{
	return this->nik;
}

void Human::setName(string name)
{
	this->name = name;
}

string Human::getName()
{
	return this->name;
}


void Human::setGender(string gender)
{
	this->gender = gender;
}

string Human::getGender()
{
	return this->gender;
}

//inisialisasi destructor
Human::~Human()
{
}