# LATIHAN5DPBO2023
Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 5 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Lengkapi kode dengan spesifikasi seperti di bawah:
* Add more property (component type: any, except text field)
* Add method to reset form
* Refresh table after update and delete
* Add confirmation prompt before delete
* Build project (generate .jar file)

## Desain Program
Program didesain menjadi 2 class dengan 1 class utama yaitu class `Mahasiswa`:
* **Mahasiswa** -> Class yang datanya akan diisi pada GUI
* **Menu** -> Class yang berisi program untuk GUI

Pada class `Mahasiswa` terdapat lima atribut:
* **nim** -> NIM mahasiswa, `String`
* **nama** -> Nama mahasiswa, `String`
* **nilai** -> Nilai mahasiswa, `String`
* **usia** -> Usia mahasiswa, `int`
* **jKelamin** -> Jenis kelamin mahasiswa, `String`

Pada class `Menu` berisi method-method untuk GUI:
* **Set Tabel** -> Men-set Tabel untuk ditampilkan pada GUI, `DefaultTableModel`
* **Insert Data** -> Menambah data, `void`
* **Update Data** -> Mengubah data yang dipilih, `void`
* **Delete Data** -> Menghapus data yang dipilih, `void`
* **Reset Form** -> Mereset form menjadi default, `void`
* Selain dari method di atas, terdapat juga method-method untuk setting GUInya

## Desain GUI
![design](https://user-images.githubusercontent.com/100757455/226342082-c12e0e27-406d-4e64-a80e-0da7a20bbe9c.png)

## Alur Program GUI
Terdapat textfield untuk mengisi data nim, nama dan nilai. Spinner untuk mengisi data usia. Radio button untuk mengisi data jenis kelamin. Jika semua data sudah diisi dan klik button `add` maka akan menambahkan data serta data akan ditampilkan pada tabel dan data pada field juga akan direset ke default (kosong). Jika user sedang mengisi data dan klik tombol `cancel` maka akan mengosongkan semua data yang sebelumnya sedang diisi (bukan data pada tabel). Jika user klik salah satu data pada tabel, data akan otomatis terisi pada field untuk mengisi data, sesuai dengan data yang dipilih, serta user dapat mengubah atau menghapus data tesebut. Jika user mengubah salah satu data dan klik tombol `update` maka data pada tabel akan berubah. Jika user klik tombol `delete` maka akan muncul kotak dialog untuk konfirmasi dan jika diklik `Yes` maka data akan dihapus.

## Dokumentasi
**Jar File**

![jar-file Screenshot](https://user-images.githubusercontent.com/100757455/226346274-843e87a3-d7e3-4454-8732-fe733b9135d1.png)

**Tambah Data**

![Screenshot 2023-03-20 200301](https://user-images.githubusercontent.com/100757455/226346811-07545f3a-fc7c-4631-959c-079ed9e18b46.png)

**Ubah Data**

![Screenshot 2023-03-20 200424](https://user-images.githubusercontent.com/100757455/226347101-f0f540e9-668c-46c1-9611-793a8ec40e68.png)

**Hapus Data**

![Screenshot 2023-03-20 200610](https://user-images.githubusercontent.com/100757455/226347610-4b776eb0-7aca-4e7d-bfd4-dcdabea96db5.png)
![Screenshot 2023-03-20 200628](https://user-images.githubusercontent.com/100757455/226347651-4397af81-e6eb-436a-8e7e-f9603ed2ba7f.png)
