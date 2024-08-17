/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include library
#include <bits/stdc++.h>

using namespace std;

//deklarasi class Human
class Human
{
	//atribut
	private:
		string nik;
		string name;
		string gender;

	public:
		//constructor
		Human();
		Human(string nik, string name, string gender);

		//method setter dan getter
		void setNik(string nik);
		string getNik();
		void setName(string name);
		string getName();
		void setGender(string gender);
		string getGender();
		//destructor
		~Human();
};

//deklarasi class Sivitas sebagai child class dari class Human
class Sivitas : public Human
{
	//atribut
	private:
		string univ;
		string email;

	public:
		//constructor
		Sivitas();
		Sivitas(string nik, string name, string gender, string univ, string email);

		//method setter dan getter
		void setUniv(string univ);
		string getUniv();
		void setEmail(string email);
		string getEmail();
		//destructor
		~Sivitas();
};

//deklarasi class Mahasiswa sebagai child class dari class Sivitas
class Mahasiswa : public Sivitas
{
	//atribut
	private:
		string nim;
		string faculty;
		string major;

	public:
		//constructor
		Mahasiswa();
		Mahasiswa(string nik, string name, string gender, string univ, string email, string nim, string faculty, string major);

		//method setter dan getter
		void setNim(string nim);
		string getNim();
		void setFaculty(string faculty);
		string getFaculty();
		void setMajor(string major);
		string getMajor();
		//destructor
		~Mahasiswa();
};

//deklarasi class Dosen sebagai child class dari class Sivitas
class Dosen : public Sivitas
{
	//atribut
	private:
		string nip;
		string faculty;
		string major;
		string lastEdu;
		string mastery;

	public:
		//constructor
		Dosen();
		Dosen(string nik, string name, string gender, string univ, string email, string nip, string faculty, string major, string lastEdu, string mastery);

		//method setter dan getter
		void setNip(string nip);
		string getNip();
		void setFaculty(string faculty);
		string getFaculty();
		void setMajor(string major);
		string getMajor();
		void setLastEdu(string lastEdu);
		string getLastEdu();
		void setMastery(string mastery);
		string getMastery();
		//destructor
		~Dosen();
};

//deklarasi class Course
class Course
{
	//atribut
	private:
		string namaMatkul;
		Dosen dosen; //composite dari class Dosen
		list<Mahasiswa> mahasiswa; //composite dari class Mahasiswa (berbentuk list)

	public:
		//constructor
		Course();
		Course(string namaMatkul, Dosen dosen, Mahasiswa mahasiswa);

		//method setter dan getter
		void setNamaMatkul(string namaMatkul);
		string getNamaMatkul();
		void setMahasiswa(Mahasiswa mahasiswa);
		list<Mahasiswa> getMahasiswa();
		void setDosen(Dosen dosen);
		Dosen getDosen();
		//destructor
		~Course();
};

//deklarasi class Prodi
class Prodi
{
	//atribut
	private:
		string namaProdi;
		string kode;
		list<Mahasiswa> mahasiswa; //composite dari class Mahasiswa
		list<Dosen> dosen; //composite dari class Dosen
		list<Course> courses; //composite dari class Course

	public:
		//constructor
		Prodi();
		Prodi(string namaProdi, string kode, Mahasiswa mahasiswa, Dosen dosen, Course course);

		//method setter dan getter
		void setNamaProdi(string namaProdi);
		string getNamaProdi();
		void setKode(string kode);
		string getKode();
		void setMahasiswa(Mahasiswa mahasiswa);
		list<Mahasiswa> getMahasiswa();
		void setDosen(Dosen dosen);
		list<Dosen> getDosen();
		void setCourses(Course course);
		list<Course> getCourses();
		//destructor
		~Prodi();
};