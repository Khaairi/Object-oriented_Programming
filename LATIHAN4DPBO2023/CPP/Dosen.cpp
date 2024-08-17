/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Dosen::Dosen() : Sivitas()
{
	nip = "";
	faculty = "";
	major = "";
	lastEdu = "";
	mastery = "";
}

//inisialisasi constructor dengan parameter (menggunakan supper dengan class Sivitas)
Dosen::Dosen(string nik, string name, string gender, string univ, string email, string nip, string faculty, string major, string lastEdu, string mastery) : Sivitas(nik, name, gender, univ, email)
{
	this->nip = nip;
	this->faculty = faculty;
	this->major = major;
	this->lastEdu = lastEdu;
	this->mastery = mastery;
}

//inisialisasi method setter dan getter
void Dosen::setNip(string nip)
{
	this->nip = nip;
}

string Dosen::getNip()
{
	return this->nip;
}

void Dosen::setFaculty(string faculty)
{
	this->faculty = faculty;
}

string Dosen::getFaculty()
{
	return this->faculty;
}

void Dosen::setMajor(string major)
{
	this->major = major;
}

string Dosen::getMajor()
{
	return this->major;
}

void Dosen::setLastEdu(string lastEdu)
{
	this->lastEdu = lastEdu;
}

string Dosen::getLastEdu()
{
	return this->lastEdu;
}

void Dosen::setMastery(string mastery)
{
	this->mastery = mastery;
}

string Dosen::getMastery()
{
	return this->mastery;
}

//inisialisasi destructor
Dosen::~Dosen()
{
}