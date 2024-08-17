<!-- Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. -->

<?php

//deklarasi class Mahasiswa
class Mahasiswa
{
	//atribut
	private $name = "";
	private $nim = "";
	private $major = "";
	private $faculty = "";
	private $image = "";

	//constructor
	public function __construct($name = "", $nim = "", $major = "", $faculty = "", $image = "")
	{
		$this->name = $name;
		$this->nim = $nim;
		$this->major = $major;
		$this->faculty = $faculty;
		$this->image = $image;
	}

	//method untuk set nama
	public function setName($name)
	{
		$this->name = $name;
	}

	//method untuk mendapatkan value dari nama
	public function getName()
	{
		return $this->name;
	}

	//method untuk set nim
	public function setNim($nim)
	{
		$this->nim = $nim;
	}

	//method untuk mendapatkan value dari nim
	public function getNim()
	{
		return $this->nim;
	}

	//method untuk set program studi
	public function setMajor($major)
	{
		$this->major = $major;
	}

	//method untuk mendapatkan value dari program studi
	public function getMajor()
	{
		return $this->major;
	}

	//method untuk set fakultas
	public function setFaculty($faculty)
	{
		$this->faculty = $faculty;
	}

	//method untuk mendapatkan value dari fakultas
	public function getFaculty()
	{
		return $this->faculty;
	}

	//method untuk set foto profile
	public function setImage($image)
	{
		$this->image = $image;
	}

	//method untuk mendapatkan value dari foto profile
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
