<!-- Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. -->

<?php
//note: untuk penjelasan desain algoritma (inheritance, dll) ada di readme github

//inisialisasi class Human (sebagai base class / parent class utama)
class Human
{
	//atribut
	private $nik = "";
	private $name = "";
	private $gender = "";

	//constructor
	public function __construct($nik = "", $name = "", $gender = "")
	{
		$this->nik = $nik;
		$this->name = $name;
		$this->gander = $gander;
	}

	//kumpulan method untuk setter dan getter tiap atribut
	public function setNik($nik)
	{
		$this->nik = $nik;
	}

	public function getNik()
	{
		return $this->nik;
	}

	public function setName($name)
	{
		$this->name = $name;
	}

	public function getName()
	{
		return $this->name;
	}

	public function setGender($gender)
	{
		$this->gender = $gender;
	}

	public function getGender()
	{
		return $this->gender;
	}

	//destructor
	public function __destruct()
	{
	}
}

//inisialisasi class Sivitas sebagai child dari class Human
class Sivitas extends Human
{
	//atribut
	private $univ = "";
	private $email = "";

	//constructor
	public function __construct($univ = "", $email = "")
	{
		$this->univ = $univ;
		$this->email = $email;
	}

	//kumpulan method setter dan getter untuk tiap atribut
	public function setUniv($univ)
	{
		$this->univ = $univ;
	}

	public function getUniv()
	{
		return $this->univ;
	}

	public function setEmail($email)
	{
		$this->email = $email;
	}

	public function getEmail()
	{
		return $this->email;
	}

	//destructor
	public function __destruct()
	{
	}
}

//inisialisasi class Mahasiswa sebagai child dari class Sivitas (juga "cucu" dari class Human)
class Mahasiswa extends Sivitas
{
	//atribut
	private $nim = "";
	private $faculty = "";
	private $major = "";
	private $image = "";

	//constructor
	public function __construct($nim = "", $faculty = "", $major = "", $image = "")
	{
		$this->nim = $nim;
		$this->faculty = $faculty;
		$this->major = $major;
		$this->image = $image;
	}

	//kumpulan method setter dan getter untuk tiap atribut
	public function setNim($nim)
	{
		$this->nim = $nim;
	}

	public function getNim()
	{
		return $this->nim;
	}

	public function setFaculty($faculty)
	{
		$this->faculty = $faculty;
	}

	public function getFaculty()
	{
		return $this->faculty;
	}

	public function setMajor($major)
	{
		$this->major = $major;
	}

	public function getMajor()
	{
		return $this->major;
	}

	public function setImage($image)
	{
		$this->image = $image;
	}

	public function getImage()
	{
		return $this->image;
	}

	//destructor
	public function __destruct()
	{
	}
}

?>