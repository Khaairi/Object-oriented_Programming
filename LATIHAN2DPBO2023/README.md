# LATIHAN2DPBO2023
### Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance  pada kelas - kelas tersebut:
* Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
* Human: NIK, nama, jenis_kelamin
* SivitasAkademik: asal_universitas, email_edu

## Desain Program
Program didesain menjadi empat class
* **Human**
* **Sivitas**
* **Mahasiswa**
* **Pilih**

Class `Human` memiliki child yaitu class `Sivitas` karena sivitas akademik dan human merupakan objek yang sama, sivitas akademik is a human, tetapi tidak semua human adalah sivitas akademik sehingga relasinya tidak dapat dibalik. Class `Sivitas` memiliki child yaitu class `Mahasiswa` karena mahasiswa merupakan sivitas akademik, tapi tidak semua sivitas akademik merupakan mahasiswa (sivitas akademik terdiri dari mahasiswa, dosen dan pengurus perguruan tinggi lain) maka relasinya tidak dapat dibalik. Maka dengan relasi seperti itu class `Mahasiswa` menjadi cucu dari class `Human` karena merupakan objek yang sama juga, mahasiswa is a human.

Desain relasi algoritma menggunakan class diagram:

![Untitled Diagram drawio](https://user-images.githubusercontent.com/100757455/220126440-58f3d5d0-5d78-425f-bc9c-348a7b6b5167.png)

Pada class `Human` terdapat tiga atribut:
* **nik** -> berisi NIK mahasiswa, `string`
* **name** -> berisi nama mahasiswa, `string`
* **gender** -> berisi jenis kelamin mahasiswa, `string`

tiap atribut memiliki setter dan getternya masing-masing.

Pada class `Sivitas` yang merupakan child dari class `Human` maka mewarisi atribut dan method dari parentnya juga dengan tambahan atribut sebagai berikut:
* **univ** -> berisi asal universitas, `string`
* **email** -> berisi email univeritas, `string`

Pada class `Mahasiswa` yang merupakan child dari class `Sivitas` dan cucu dari class `Human` maka mewarisi atribut dan method dari keduanya dengan tambahan atribut sebagai berikut:
* **nim** -> berisi NIM mahasiswa, `string`
* **faculty** -> berisi fakultas mahasiswa, `string`
* **major** -> berisi program studi, `string`

Pada class `Pilih` terdapat dua method:
* **add** -> untuk menambahkan data
* **show** -> untuk menampilkan data

## Alur Program
Pertama program akan menampilkan menu pilihan dan user diminta untuk menginput salah satu dari ketiga pilihan dan jika program sudah selesai menjalankan perintah maka proses (inputan untuk pemilihan menu) akan dijalankan berulang sampai user menginput perintah untuk mengakhiiri program.
* masukkan (1) untuk menjalankan perintah `add`. Jika user menjalankan perintah ini maka program akan meminta user untuk menginputkan serangakian data mahasiswa. Lalu sebelum diinput ke list, program akan melakukan pengecekan terlebih dahulu terhadap nik yang akan diinput, jika nik sudah tersedia di list maka program akan mengeluarkan error handling dan data tidak akan diinput ke list.
* masukkan (2) untuk menjalankan perintah `show`. Jika user menjalankan perintah ini maka program akan meng-print semua data mahasiswa yang ada pada list.
* masukkan (3) untuk mengakhiri program

## Dokumentasi
Pada program Java

![Screenshot - Java](https://user-images.githubusercontent.com/100757455/218931751-ed49b146-d9c6-414e-abc8-c3a08ab49cac.png)

Pada program PHP

![Screenshot - PHP](https://user-images.githubusercontent.com/100757455/220126850-a380bbb7-843d-431a-b5ef-00dad9beb065.png)
