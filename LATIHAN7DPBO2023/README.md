# LATIHAN7DPBO2023
Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 7 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Modifikasi kode yang ada. Ketika pencet WASD, skor masih jadi 1 2 3 4 secara hardcode. Nahh, modifikasi skor nya sehingga ketika ganti tombol yang dipencet, skornya selalu bertambah. Misal, posisi sekarang 0. Pencet W, tambah 1. Jadi satu, berhenti. Pencet D, tambah satu. Jadi 2, berhenti. Pencet apapun lagi asal WASD, tambah satu. Jadi 3. dst. ditambah kayak yang kotak-kotak kujelasin kemaren

## Desain Program
![desaign drawio (1)](https://user-images.githubusercontent.com/100757455/232990458-51379019-ca69-4319-bd8f-c02b56eeba46.png)

## Alur Program
* User dapat menekan tombol WASD/arrow key pada keyboard untuk menggerakkan object `Player` yang berbentuk lingkaran pada tampilan
* Tiap object berpindah misalkan dengan menekan tombol W maka score akan bertambah satu (tetapi jika benda sudah bergerak ke kanan lalu berhenti dan bergerak lagi ke kanan maka score tidak bertambah 2 tetapi hanya 1, score akan bertambah lagi jika object berpindah ke arah yang lain)
* Terdapat object lain yaitu `Obstacle`, berbentuk kotak, yang dapat didekati oleh object `Player` dan jika object bersentuhan (posisinya sama) maka object `Obstacle` akan hilang dan berpindah secara random di bidang layar dan juga catch akan bertambah 1

## Dokumentasi
![2023-04-21 21-34-45 (online-video-cutter com)](https://user-images.githubusercontent.com/100757455/233665571-f0f9c3f8-6585-4850-a8b7-4df8575a3c21.gif)

Kondisi awal saat program dijalankan

![Screenshot (292)](https://user-images.githubusercontent.com/100757455/232993887-505a6d26-d4fc-48bb-a414-73586108bbda.png)

Kondisi setelah bergerak

![image](https://user-images.githubusercontent.com/100757455/232993552-b14d6ecb-070d-4b8f-985d-ab5b425b8b7d.png)
