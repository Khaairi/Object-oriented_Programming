/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//import library
#include <iostream>
#include <string>

using namespace std;

//note: untuk penjelasan desain algoritma (inheritance, dll) ada di readme github

//inisialisasi class Human (sebagai base class / parent class utama)
class Human
{
	//atribut
	private:
		string nik;
		string name;
		string gender;

	public:
		//constructor
		Human()
		{
			//default value
			this->nik = "";
			this->name = "";
			this->gender = "";
		}

		//kumpulan method setter dan getter untuk tiap atribut (dibuat setter dan getter karena atribut bersifat private)
		void setNik(string nik)
		{
			this->nik = nik;
		}

		string getNik()
		{
			return this->nik;
		}

		
		void setName(string name)
		{
			this->name = name;
		}

		string getName()
		{
			return this->name;
		}

		
		void setGender(string gender)
		{
			this->gender = gender;
		}

		string getGender()
		{
			return this->gender;
		}

		//destructor
		~Human()
		{
		}
};

//inisialisasi class Sivitas sebagai child dari class Human
class Sivitas : public Human
{
	//atribut
	private:
		string univ;
		string email;

	public:
		//constructor
		Sivitas()
		{
			this->univ = "";
			this->email = "";
		}

		//kumpulan method setter dan getter untuk tiap atribut
		void setUniv(string univ)
		{
			this->univ = univ;
		}

		string getUniv()
		{
			return this->univ;
		}

		
		void setEmail(string email)
		{
			this->email = email;
		}

		string getEmail()
		{
			return this->email;
		}

		//destructor
		~Sivitas()
		{
		}
};

//inisialisasi class Mahasiswa sebagai child dari class Sivitas (juga "cucu" dari class Human)
class Mahasiswa : public Sivitas
{
	//atribut
	private:
		string nim;
		string faculty;
		string major;

	public:
		//constructor
		Mahasiswa()
		{
			this->nim = "";
			this->faculty = "";
			this->major = "";
		}

		//kumpulan method setter dan getter untuk tiap atribut
		void setNim(string nim)
		{
			this->nim = nim;
		}

		string getNim()
		{
			return this->nim;
		}

		
		void setFaculty(string faculty)
		{
			this->faculty = faculty;
		}

		string getFaculty()
		{
			return this->faculty;
		}

		
		void setMajor(string major)
		{
			this->major = major;
		}

		string getMajor()
		{
			return this->major;
		}

		//destructor
		~Mahasiswa()
		{
		}
};