# Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

from CRUD import CRUD

#deklarasi list
mmahasiswa = []
nim = ""
n = 0
flag = True

#perulangan selama inputan bukan 5
while flag:
	#inputan untuk pemilihan menu
	print("\nMasukkan menu (1 : Input, 2 : ubah, 3 : hapus, 4 : Tampil, 5 : Keluar):")
	n = int(input())
	# masukkan 1 untuk menambahkan data
	if(n == 1):
		CRUD.add(mmahasiswa)

	# masukkan 2 untuk mengubah data
	if(n == 2):
		print("Masukkan NIM mahasiswa yang akan diubah:")
		nim = str(input())
		CRUD.update(nim, mmahasiswa)

	# masukkan 3 untuk menghapus data
	if(n == 3):
		print("Masukkan NIM mahasiswa yang akan dihapus:")
		nim = str(input())
		CRUD.delete(nim, mmahasiswa)

	# masukkan 4 untuk menampilkan data
	if(n == 4):
		CRUD.show(mmahasiswa)

	if(n == 5):
		flag = False