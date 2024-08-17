/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

int main()
{
	// instance object dari class Mahasiswa
	Mahasiswa mahasiswa1 = Mahasiswa("2121", "Resyad", "L", "UPI", "resyad@upi.edu", "1010", "FPMIPA", "Ilmu Komputer");
	Mahasiswa mahasiswa2 = Mahasiswa("2219", "Nadip", "L", "UPI", "nadipp@upi.edu", "1011", "FPMIPA", "Ilmu Komputer");
	Mahasiswa mahasiswa3 = Mahasiswa("2781", "Pikri", "L", "UPI", "pikrii@upi.edu", "1012", "FPMIPA", "Ilmu Komputer");

	//instance object dari class Dosen
	Dosen dosen1 = Dosen("1192", "Mr. John", "L", "UPI", "jhon2@upi.edu", "1191", "FPMIPA", "Ilmu Komputer", "S2", "Artificial Intelligence");
	Dosen dosen2 = Dosen("1819", "Mrs. Rose", "P", "UPI", "roses@upi.edu", "1129", "FPMIPA", "Ilmu Komputer", "S3", "Pemrograman");
	Dosen dosen3 = Dosen("2201", "Mrs. Renata", "P", "UPI", "renatagl@upi.edu", "1762", "FPMIPA", "Ilmu Komputer", "S2", "Grafikom");

	// instance object dari class Course
	Course course1 = Course("Artificial Intelligence", dosen1, mahasiswa1);
	course1.setMahasiswa(mahasiswa2);
	Course course2 = Course("Strukdat", dosen2, mahasiswa1);
	course2.setMahasiswa(mahasiswa2);
	course2.setMahasiswa(mahasiswa3);
	Course course3 = Course("Grafikom", dosen3, mahasiswa2);
	course3.setMahasiswa(mahasiswa3);

	// instance object dari class Prodi
	Prodi prodi1 = Prodi("Ilmu Komputer", "IK", mahasiswa1, dosen1, course1);
	// lalu set untuk mahasiswa, dosen dan course yang belum diinput ke prodi
	prodi1.setMahasiswa(mahasiswa2);
	prodi1.setMahasiswa(mahasiswa3);
	prodi1.setCourses(course2);
	prodi1.setCourses(course3);
	prodi1.setDosen(dosen2);
	prodi1.setDosen(dosen3);

	//output
	cout << "=== Program Studi " << prodi1.getNamaProdi() << " ===" << '\n';
	cout << "Kode : " << prodi1.getKode() << '\n';
	cout << "List dosen pada program studi " << prodi1.getNamaProdi() << ":\n";
	list<Dosen> llist = prodi1.getDosen();
	int i = 0;
	for(list<Dosen>::iterator it = (llist).begin(); it != (llist).end(); it++)
	{
		cout << (i+1) << ". \n";
		cout << "NIK                 : " << it->getNik() << '\n';
		cout << "Nama                : " << it->getName() << '\n'; 
		cout << "Jenis Kelamin       : " << it->getGender() << '\n';
		cout << "Asal Universitas    : " << it->getUniv() << '\n';
		cout << "Email               : " << it->getEmail() << '\n';
		cout << "NIM                 : " << it->getNip() << '\n';
		cout << "Fakultas            : " << it->getFaculty() << '\n';
		cout << "Program Studi       : " << it->getMajor() << '\n';
		cout << "Pendidikan Terakhir : " << it->getLastEdu() << '\n';
		cout << "Keahlian            : " << it->getMastery() << '\n';
		i++;
	}

	cout << "\nList mahasiswa pada program studi " << prodi1.getNamaProdi() << ":\n";
	list<Mahasiswa> mmahasiswa = prodi1.getMahasiswa();
	i = 0;
	for(list<Mahasiswa>::iterator it = (mmahasiswa).begin(); it != (mmahasiswa).end(); it++)
	{
		cout << (i+1) << ". \n";
		cout << "NIK              : " << it->getNik() << '\n';
		cout << "Nama             : " << it->getName() << '\n'; 
		cout << "Jenis Kelamin    : " << it->getGender() << '\n';
		cout << "Asal Universitas : " << it->getUniv() << '\n';
		cout << "Email            : " << it->getEmail() << '\n';
		cout << "NIM              : " << it->getNim() << '\n';
		cout << "Fakultas         : " << it->getFaculty() << '\n';
		cout << "Program Studi    : " << it->getMajor() << '\n';
		i++;
	}

	cout << "\nList mata kuliah pada program studi " << prodi1.getNamaProdi() << ":\n";
	list<Course> courses = prodi1.getCourses();
	i = 0;
	int j = 0;
	for(list<Course>::iterator it = (courses).begin(); it != (courses).end(); it++)
	{
		cout << (i+1) << ". " << it->getNamaMatkul() << '\n';
		cout << "   " << "Dosen ampu : " << it->getDosen().getName() << '\n';
		i++;
		cout << "   " << "List mahasiswa yang mengontrak :\n";
		list<Mahasiswa> mahasiswas = it->getMahasiswa();
		for(list<Mahasiswa>::iterator it = (mahasiswas).begin(); it != (mahasiswas).end(); it++)
		{
			cout << "   " << (j+1) << ". " << it->getName() << '\n';
			j++;
		}
		j = 0;
	}

	return 0;
}