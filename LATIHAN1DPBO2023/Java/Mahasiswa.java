/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//inisialisasi class Mahasiswa
public class Mahasiswa
{
	//atribut
	private String name;
	private String nim;
	private String major;
	private String faculty;

	//constructor
	public Mahasiswa()
	{
		this.name = "";
		this.nim = "";
		this.major = "";
		this.faculty = "";
	}

	//method untuk set nama
	public void setName(String name)
	{
		this.name = name;
	}

	//method untuk mendapatkan value dari nama
	public String getName()
	{
		return this.name;
	}

	//method untuk set nim
	public void setNim(String nim)
	{
		this.nim = nim;
	}

	//method untuk mendapatkan value dari nim
	public String getNim()
	{
		return this.nim;
	}

	//method untuk set program studi
	public void setMajor(String major)
	{
		this.major = major;
	}

	//method untuk mendapatkan value dari program studi
	public String getMajor()
	{
		return this.major;
	}

	//method untuk set fakultas
	public void setFaculty(String faculty)
	{
		this.faculty = faculty;
	}

	//method untuk mendapatkan value dari fakultas
	public String getFaculty()
	{
		return this.faculty;
	}

	//java tidak memerlukan destructor karena sudah garbage collection
}