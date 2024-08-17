<!-- Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. -->

<?php
//import
require ('Human.php');

//inisialisasi class Pilih
class Pilih
{
	//constructor
	public function __construct()
	{
	}

	//method untuk menambahkan data
	public function add(&$list, $nik, $name, $gender, $univ, $email, $nim, $faculty, $major, $image)
	{
		//instance object menggunakan class Mahasiswa
		$mhs = new Mahasiswa();

		//set value dari parameter ke object
		$mhs->setNik($nik);
		$mhs->setName($name);
		$mhs->setGender($gender);
		$mhs->setUniv($univ);
		$mhs->setEmail($email);
		$mhs->setNim($nim);
		$mhs->setFaculty($faculty);
		$mhs->setMajor($major);
		$mhs->setImage($image);

		//push object ke list / array
		array_push($list, $mhs);
	}

	//method untuk menampilkan data
	public function show($list)
	{
		//output berupa tabel
		echo "<table border='1' cellspacing='0' cellpading='10' cellpadding='10'";
		echo "<tr>";
		echo "<th>No</th>";
		echo "<th>NIK</th>";
		echo "<th>Nama</th>";
		echo "<th>Jenis Kelamin</th>";
		echo "<th>Asal Universitas</th>";
		echo "<th>Email Universitas</th>";
		echo "<th>NIM</th>";
		echo "<th>Fakultas</th>";
		echo "<th>Program Studi</th>";
		echo "<th>Foto Profile</th>";
		echo "</tr>";
		$j = 1;
		$i;
		for($i = 0; $i < count($list); $i++)
		{
			echo "<tr>";
			echo  "<td>" . $j . '. ' . "</td>";
			echo "<td>" . $list[$i]->getNik() . "</td>";
			echo "<td>" . $list[$i]->getName() . "</td>";
			echo "<td>" . $list[$i]->getGender() . "</td>";
			echo "<td>" . $list[$i]->getUniv() . "</td>";
			echo "<td>" . $list[$i]->getEmail() . "</td>";
			echo "<td>" . $list[$i]->getNim() . "</td>";
			echo "<td>" . $list[$i]->getFaculty() . "</td>";
			echo "<td>" . $list[$i]->getMajor() . "</td>";
			echo "<td>" . "<img src='" . $list[$i]->getImage() . "' style='width: 100px;'>" . '</td>';
			echo "</tr>";
			$j = $j + 1;
		}
		echo "</table>";
		echo "<br>";
	}

	//destructor
	public function __destruct()
	{	
	}
}

?>