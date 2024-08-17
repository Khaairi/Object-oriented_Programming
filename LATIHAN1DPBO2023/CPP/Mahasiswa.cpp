/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//library yang digunakan
#include <iostream>
#include <string>

using namespace std;

//deklarasi class Mahasiswa
class Mahasiswa
{
	//atribut yang digunakan (diset private)
	private:
		string name;
		string nim;
		string major;
		string faculty;

	//method yang digunakan (diset public)
	public:
		//constructor
		Mahasiswa()
		{
			this->name = "";
			this->nim = "";
			this->major = "";
			this->faculty = "";
		}

		/*setter dan getter digunakan karena atribut yang ada pada class Mahasiswa bersifat private, 
		sehingga jika ingin diakses oleh class lain harus melalui method*/

		//method untuk set (mengisi/menginput) nama mahasiswa
		void setName(string name)
		{
			this->name = name;
		}

		//method untuk set nim mahasiswa
		void setNim(string nim)
		{
			this->nim = nim;
		}

		//method untuk set program studi
		void setMajor(string major)
		{
			this->major = major;
		}

		//method untuk set fakultas
		void setFaculty(string faculty)
		{
			this->faculty = faculty;
		}

		//method untuk mendapatkan value dari atribut name
		string getName()
		{
			return this->name;
		}

		//method untuk mendapatkan value dari atribut nim
		string getNim()
		{
			return this->nim;
		}

		//method untuk mendapatkan value dari atribut major
		string getMajor()
		{
			return this->major;
		}

		//method untuk mendapatkan value dari atribut faculty
		string getFaculty()
		{
			return this->faculty;
		}

		//destructor
		~Mahasiswa()
		{

		}
};