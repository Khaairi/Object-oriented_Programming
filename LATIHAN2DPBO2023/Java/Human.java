/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//inisialisasi class Human
class Human
{
	//atribut
	private String nik;
	private String name;
	private String gender;

	//constructor
	public Human()
	{
		this.nik = "";
		this.name = "";
		this.gender = "";
	}

	//kumpulan method untuk class Human (setter dan getter)
	public void setNik(String nik)
	{
		this.nik = nik;
	}

	public String getNik()
	{
		return this.nik;
	}

	public void setName(String name)
	{
		this.name = name;
	}

	public String getName()
	{
		return this.name;
	}

	public void setGender(String gender)
	{
		this.gender = gender;
	}

	public String getGender()
	{
		return this.gender;
	}

	//pada java tidak memerlukan destructor karena sudah garbage collection
}

//inisialisasi class Sivitas yang merupakan child dari class Human
class Sivitas extends Human
{
	//atribut
	private String univ;
	private String email;

	//constructor
	public Sivitas()
	{
		this.univ = "";
		this.email = "";
	}

	//kumpulan method untuk class Sivitas (setter dan getter)
	public void setUniv(String univ)
	{
		this.univ = univ;
	}

	public String getUniv()
	{
		return this.univ;
	}

	public void setEmail(String email)
	{
		this.email = email;
	}

	public String getEmail()
	{
		return this.email;
	}
}

//inisialisasi class Mahasiswa yang merupakan child dari class Sivitas
class Mahasiswa extends Sivitas
{
	//atribut
	private String nim;
	private String faculty;
	private String major;

	//constructor
	public Mahasiswa()
	{
		this.nim = "";
		this.faculty = "";
		this.major = "";
	}

	//kumpulan method untuk class Mahasiswa (setter dan getter)
	public void setNim(String nim)
	{
		this.nim = nim;
	}

	public String getNim()
	{
		return this.nim;
	}

	public void setFaculty(String faculty)
	{
		this.faculty = faculty;
	}

	public String getFaculty()
	{
		return this.faculty;
	}

	public void setMajor(String major)
	{
		this.major = major;
	}

	public String getMajor()
	{
		return this.major;
	}
}