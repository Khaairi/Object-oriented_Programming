<!-- Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. -->

<?php

//import library
require ('CRUD.php');
require ('Mahasiswa.php');

//membuat array
$data = [];
//instance object berdasarkan class CRUD
$crud = new CRUD();

//instance object berdasarkan class Mahasiswa
$mhs[0] = new Mahasiswa();
$mhs[1] = new Mahasiswa();
$mhs[2] = new Mahasiswa();

//proses menambahkan data dan menampilkan data mahasiswa awal
$crud->add($data, $mhs, 0, "Mahasiswa1", "222", "Ilmu Komputer", "MIPA", "image/image1.png");
$crud->add($data, $mhs, 1, "Mahasiswa2", "333", "Ilmu Komputer", "MIPA", "image/image2.png");
$crud->add($data, $mhs, 2, "Mahasiswa3", "444", "Pendidikan Ilmu Komputer", "MIPA", "image/image3.png");
echo '<b>List Mahasiswa Awal (setelah dilakukan penambahan data):</b>' . '<br>';
$crud->show($data);

//proses perubahan (delete dan update data) serta menampilkan data setelah perubahan
$crud->update($data, 222, "Mahasiswa Baru", "10", "Pendidikan Ilmu Komputer", "MIPA", "image/image1.png");
$crud->update($data, 444, "Mahasiswa Baru 2", "20", "Pendidikan Ilmu Komputer", "MIPA", "image/image4.png");
echo '<b>List Mahasiswa Setelah Perubahan:</b>' . '<br>';
$crud->show($data);

$crud->delete($data, 10);
echo '<b>List Mahasiswa Setelah Penghapusan:</b>' . '<br>';
$crud->show($data);

?>
