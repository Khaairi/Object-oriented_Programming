/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Prodi::Prodi()
{
	namaProdi = "";
	kode = "";
}

//inisialisasi constructor dengan parameter
Prodi::Prodi(string namaProdi, string kode, Mahasiswa mahasiswa, Dosen dosen, Course course)
{
	this->namaProdi = namaProdi;
	this->kode = kode;
	this->mahasiswa.push_back(mahasiswa);
	this->dosen.push_back(dosen);
	this->courses.push_back(course);
}

//inisialisasi method setter dan getter
void Prodi::setNamaProdi(string namaProdi)
{
	this->namaProdi = namaProdi;
}

string Prodi::getNamaProdi()
{
	return this->namaProdi;
}


void Prodi::setKode(string kode)
{
	this->kode = kode;
}

string Prodi::getKode()
{
	return this->kode;
}

void Prodi::setMahasiswa(Mahasiswa mahasiswa)
{
	this->mahasiswa.push_back(mahasiswa);
}

list<Mahasiswa> Prodi::getMahasiswa()
{
	return this->mahasiswa;
}

void Prodi::setDosen(Dosen dosen)
{
	this->dosen.push_back(dosen);
}

list<Dosen> Prodi::getDosen()
{
	return this->dosen;
}

void Prodi::setCourses(Course course)
{
	this->courses.push_back(course);
}

list<Course> Prodi::getCourses()
{
	return this->courses;
}

//inisialisasi destructor
Prodi::~Prodi()
{
}