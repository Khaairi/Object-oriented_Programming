# LATIHAN1DPBO2023
### Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang menampilkan informasi daftar mahasiswa (sekumpulan objek mahasiswa) dan memiliki fitur menambah, mengubah, dan menghapus data. Setiap mahasiswa memiliki data nama, NIM, program studi, fakultas, dan foto profil (khusus bahasa PHP).

## Desain Program
Program didesain menjadi dua class:
* **Mahasiswa**
* **CRUD**

Pada class `Mahasiswa` terdapat empat atribut (lima khusus PHP):
* **name**               -> berisikan nama mahasiswa, tipe data `string`
* **nim**                -> berisikan nim mahasiswa, bertipe data `string`
* **major**              -> berisikan program studi mahasiswa, bertipe data `string`
* **faculty**            -> berisikan fakultas mahasiswa, bertipe data `string`
* **(khusus PHP) image** -> berisikan path dari foto profile mahasiswa, bertipe data `string`

Tiap atribut memiliki setter dan getternya masing-masing yang berada pada class `Mahasiswa`.

Pada class `CRUD` juga memiliki lima atribut yang sama seperti class `Mahasiswa` tapi digunakan hanya sebagai tempat tampungan inputan untuk method `add` dan `update`.
Pada class `CRUD` memiliki empat method:
* **add**    -> untuk menambahkan data mahasiswa
* **update** -> untuk mengubah data mahasiswa
* **delete** -> untuk menghapus data mahasiswa
* **show**   -> untuk menampilkan data mahasiswa

## Alur Program
**Semua program memiliki alur yang sama, hanya saja pada PHP tidak ada inputan dari user (data untuk CRUD dibuat hardcode).**

Pertama program akan menampilkan menu pilihan dan user diminta untuk menginput salah satu dari kelima pilihan dan jika program sudah selesai menjalankan perintah maka proses (inputan untuk pemilihan menu) akan dijalankan berulang sampai user menginput perintah untuk mengakhiiri program. 
Kelima perintahnya yaitu:
* masukkan (1) untuk menjalankan perintah `add`
Jika user menjalankan perintah ini maka program akan meminta user untuk menginputkan serangakian data mahasiswa, yaitu nama, nim, program studi dan fakultas. 
Lalu sebelum diinput ke list, program akan melakukan pengecekan terlebih dahulu terhadap nim yang akan diinput, jika nim sudah tersedia di list maka program akan mengeluarkan error handling dan data tidak akan diinput ke list.
* masukkan (2) untuk menjalankan perintah `update`
Jika user menjalankan perintah ini maka program akan meminta user untuk menginput nim mahasiswa yang datanya akan diubah, jika nim tersedia pada list maka program akan meminta user menginputkan data mahasiswa yang baru (seperti pada perintah `add`) tapi jika nim tidak tersedia maka akan mengeluarkan error handling.
* masukkan (3) untuk menjalankan perintah `delete`
Jika user menjalankan perintah ini maka program akan meminta user untuk menginput nim mahasiswa yang datanya akan dihapus, jika nim tersedia maka data tersebut akan dihapus dari list tapi jika data nim tidak tersedia pada list maka akan mengeluarkan error handling.
* masukkan (4) untuk menjalankan perintah `show`
Jika user menjalankan perintah ini maka program akan meng-print semua data mahasiswa yang ada pada list dalam bentuk tabel sederhana.
* masukkan (5) untuk keluar dari program / mengakhiri program.

## Dokumentasi
Pada program C++

![Screenshot - CPP](https://user-images.githubusercontent.com/100757455/218741007-c48a166d-69b4-4b1d-8e28-e2dee638c94e.png)

Pada program PHP

![Screenshot - PHP](https://user-images.githubusercontent.com/100757455/218741121-b612de8e-c9cb-4260-baa4-9129cb16dbc1.png)
![Screenshot (252)](https://user-images.githubusercontent.com/100757455/218745954-b53de77c-c702-4d54-9353-2c0939ca024c.png)

