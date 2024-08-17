# LATIHAN4DPBO2023
Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
* Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
* Human: NIK, nama, jenis_kelamin
* SivitasAkademik: asal_universitas, email_edu
* Dosen: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian
* Course: nama_matakuliah, 
* Program Studi: nama_prodi, kode, course

## Desain Program
![desaign drawio](https://user-images.githubusercontent.com/100757455/222138989-b88d25c1-7cda-4a59-9a3a-60339dbe6674.png)

Program didesain menjadi enam class
* **Human**
* **Sivitas**
* **Mahasiswa**
* **Dosen**
* **Prodi**
* **Course**

Penjelasan relasi:
Class `Human` memiliki child yaitu class `Sivitas` karena sivitas akademik dan human merupakan objek yang sama, sivitas akademik is a human, tetapi tidak semua human adalah sivitas akademik sehingga relasinya tidak dapat dibalik. Class `Sivitas` memiliki child yaitu class `Mahasiswa` karena mahasiswa merupakan sivitas akademik, tapi tidak semua sivitas akademik merupakan mahasiswa (sivitas akademik terdiri dari mahasiswa, dosen dan pengurus perguruan tinggi lain) maka relasinya tidak dapat dibalik. Begitu juga dengan class `Dosen` yang merupakan child dari class `Sivitas`. Maka dengan relasi seperti itu class `Mahasiswa` dan `Dosen` menjadi cucu dari class `Human` karena merupakan objek yang sama juga. Untuk Composite atau relasi "has-a", class `Prodi` meng-composite class `Mahasiswa`, `Dosen` dan `Course` karena pada Prodi (Program Studi) itu terdapat mahasiswa yang berkuliah di prodi tersebut, dosen yang mengajar pada prodi tersebut dan mata kuliah yang terdapat pada prodi tersebut. Bisa saja relasi ini dibalik, misalkan mahasiswa has a prodi, tapi desain ini tidak digunakan sebab akan mempersulit pada output, jadi dengan relasi yang digunakan saat ini secara tidak langsung semua class "terbungkus" pada satu class yang sama yaitu class `Prodi` sehingga outpunya nanti hanya perlu yang class `Prodi` saja. Lalu untuk class `Course` juga meng-composite class `Mahasiswa` dan `Dosen` yang artinya pada mata kuliah tersebut siapa saja mahasiswa yang mengontrak dan siapa dosen pengampunya. Relasi ini juga dapat dibalik, tapi sama seperti composite pada class `Prodi`, hal ini tidak dilakukan untuk mempermudah output.

Pada class `Human` terdapat tiga atribut:
* **nik**    -> berisi NIK mahasiswa, `string`
* **name**   -> berisi nama mahasiswa, `string`
* **gender** -> berisi jenis kelamin mahasiswa, `string`

tiap atribut memiliki setter dan getternya masing-masing.

Pada class `Sivitas` yang merupakan child dari class `Human` maka mewarisi atribut dan method dari parentnya juga dengan tambahan atribut sebagai berikut:
* **univ** -> berisi asal universitas, `string`
* **email** -> berisi email univeritas, `string`

Pada class `Mahasiswa` yang merupakan child dari class `Sivitas` dan cucu dari class `Human` maka mewarisi atribut dan method dari keduanya dengan tambahan atribut sebagai berikut:
* **nim** -> berisi NIM mahasiswa, `string`
* **faculty** -> berisi fakultas mahasiswa, `string`
* **major** -> berisi program studi, `string`

Pada class `Dosen` yang merupakan child dari class `Sivitas` dan cucu dari class `Human` maka mewarisi atribut dan method dari keduanya dengan tambahan atribut sebagai berikut:
* **nip** -> berisi NIP dosen, `string`
* **faculty** -> berisi fakultas di mana dosen tersebut berasal, `string`
* **major** -> berisi program studi di mana dosen tersebut berasal, `string`
* **lastEdu** -> berisi pendidikan terakhir dosen, `string`
* **mastery** -> berisi keahlian dosen, `string`

Pada class `Prodi` terdapat lima atribut:
* **namaProdi** -> berisi nama prodi, `string`
* **kode** -> berisi kode prodi, `string`
* **mahasiswa** -> berisi kumpulan data mahasiswa yang berada pada prodi tersebut, `list object dari class Mahasiswa`
* **dosen** -> berisi kumpulan data dosen yang berada pada prodi tersebut, `list object dari class Dosen`
* **courses** -> berisi kumpulan mata kuliah pada prodi tersebut, `list object dari class Course`

Pada class `Couses` terdapat tiga atribut:
* **namaMatkul** -> berisi nama matkul, `string`
* **dosenAmpu** -> berisi data dosen yang mengampu matkul tersebut, `object dari class Dosen`
* **mhsKontrak** -> berisi kumpulan data mahasiswa yang mengontrak matkul tersebut, `list object dari class Mahasiswa`

## Alur Program
inputan dilakukan secara manual / hardcode, input berupa instansiasi object dari class yang disebutkan di atas, lalu mengisi datanya pada parameter secara manual. Output berupa print data class `Prodi` yang mana di dalamnya juga terdapat data class `Mahasiswa`, `Dosen` dan `Course`, juga pada class `Course` yang berisi data mahasiswa yang mengontrak matkul tersebut berserta dosen pengampunya.

## Dokumentasi
Pada program python

![Screenshot - Python](https://user-images.githubusercontent.com/100757455/222145981-3c0383d2-eda5-49ce-8b5f-28a21961b820.png)

Pada program CPP

![Screenshot - CPP (1)](https://user-images.githubusercontent.com/100757455/222944199-3799b374-3aa4-40ef-a7b5-93a1a4e3930f.png)
![Screenshot - CPP (2)](https://user-images.githubusercontent.com/100757455/222944205-eb33275d-9be3-401d-a3c2-c7fb0b003f65.png)
