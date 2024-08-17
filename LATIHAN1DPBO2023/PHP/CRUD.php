<!-- Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. -->

<?php

//deklarasi class CRUD
class CRUD
{
	//constructor
	public function __construct()
	{

	}

	//method untuk menambahkan data (create)
	public function add(&$list, $mhs, $idx2, $name, $nim, $major, $faculty, $image)
	{
		//set data dari paramater dan masukan ke array
		$mhs[$idx2]->setName($name);
		$mhs[$idx2]->setNim($nim);
		$mhs[$idx2]->setMajor($major);
		$mhs[$idx2]->setFaculty($faculty);
		$mhs[$idx2]->setImage($image);

		$list[$idx2] = $mhs[$idx2];
	}

	//method untuk mengubah data (update)
	public function update(&$list, $nimGanti, $name, $nim, $major, $faculty, $image)
	{
		//perulangan untuk mencari data (berdasarkan nim)
		foreach($list as $llist)
		{
			//jika ketemu maka set dengan data baru dari parameter
			if($llist->getNim() == $nimGanti)
			{
				$llist->setName($name);
				$llist->setNim($nim);
				$llist->setMajor($major);
				$llist->setFaculty($faculty);
				$llist->setImage($image);
			}
		}
	}

	//method untuk menghapus data (delete)
	public function delete(&$list, $nimHapus)
	{
		$i;
		//perulangan untuk mencari data (berdasarkan nim)
		for($i = 0; $i < count($list); $i++)
		{
			if($list[$i]->getNim() == $nimHapus)
			{
				array_splice($list, $i, 1);
			}
		}
	}

	//method untuk menampilkan data (read)
	public function show($list)
	{
		//output berupa tabel
		echo "<table border='1' cellspacing='0' cellpading='10' cellpadding='10'";
		echo "<tr>";
		echo "<th>No</th>";
		echo "<th>Nama</th>";
		echo "<th>NIM</th>";
		echo "<th>Program Studi</th>";
		echo "<th>Fakultas</th>";
		echo "<th>Foto Profile</th>";
		echo "</tr>";
		$j = 1;
		$i;
		for($i = 0; $i < count($list); $i++)
		{
			echo "<tr>";
			echo  "<td>" . $j . '. ' . "</td>";
			echo "<td>" . $list[$i]->getName() . "</td>";
			echo "<td>" . $list[$i]->getNim() . "</td>";
			echo "<td>" . $list[$i]->getMajor() . "</td>";
			echo "<td>" . $list[$i]->getFaculty() . "</td>";
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
