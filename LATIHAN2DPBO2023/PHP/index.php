<!-- Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. -->

<?php
//import
require ('Pilih.php');

//deklarasi list
$data = [];
//instance object menggunakan class Pilih
$pilihan = new Pilih();

//menambahkan data
$pilihan->add($data, "2121", "ri", "Laki-laki", "UPI", "ri@upi.edu", "21000", "FPMIPA", "Ilmu Komputer", "image/image1.png");
$pilihan->add($data, "2122", "riri", "Laki-laki", "UPI", "ri2@upi.edu", "21001", "FPMIPA", "Ilmu Komputer", "image/image2.png");
$pilihan->add($data, "2067", "gus", "Laki-laki", "Unpad", "gus@unpad.edu", "20011", "FH", "Ilmu Hukum", "image/image3.png");
$pilihan->add($data, "2092", "gif", "Laki-laki", "Unpad", "giff@unpad.edu", "20004", "FP", "Peternakan", "image/image4.png");

//menampilkan data
echo '<b>List Mahasiswa:</b>' . '<br>';
$pilihan->show($data);

?>