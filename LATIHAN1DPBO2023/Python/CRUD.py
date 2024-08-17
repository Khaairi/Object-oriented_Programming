# Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

#import class
from Mahasiswa import Mahasiswa

#deklarasi class CRUD
class CRUD:
	#atribut untuk tampungan
	name = ""
	nim = ""
	major = ""
	faculty = ""

	#constructor
	def __init__():
		i = 0 #katanya gak boleh kosong

	#method untuk menambahkan data (create)
	def add(mmahasiswa):
		j = 0

		#inputan untuk data mahasiswa
		print("Masukkan Nama:")
		name = str(input())
		print("Masukkan NIM:")
		nim = str(input())
		print("Masukkan Program Studi:")
		major = str(input())
		print("Masukkan Fakultas:")
		faculty = str(input())

		#pengecekan apakah data sudah tersedia pada list (berdasarkan nim)
		for mahasiswa in mmahasiswa:
			if(nim == mahasiswa.getNim()):
				j = 1
				print("\nTidak dapat menambahkan data, NIM sudah tersedia!")

		#jika tidak tersedia maha masukkan ke list
		if(j == 0):
			mmahasiswa.append(Mahasiswa(name, nim, major, faculty))
			print("\nData berhasil ditambahkan!")

	#method untuk mengubah data (update)
	def update(nim, mmahasiswa):
		j = 0

		#perulangan untuk mencari data yang akan diubah (berdasarkan nim)
		for mahasiswa in mmahasiswa:
			if(nim == mahasiswa.getNim()):
				#inputan untuk data yang akan diubah
				print("Masukkan Nama:")
				name = str(input())
				print("Masukkan NIM:")
				nim = str(input())
				print("Masukkan Program Studi:")
				major = str(input())
				print("Masukkan Fakultas:")
				faculty = str(input())

				mahasiswa.setName(name);
				mahasiswa.setNim(nim);
				mahasiswa.setMajor(major);
				mahasiswa.setFaculty(faculty);

				print("\nData berhasil diubah!")

				j = 1

		#jika data tidak tersedia
		if(j == 0):
			print("\nData tidak tersedia!")

	#method untuk menghapus data (delete)
	def delete(nim, mmahasiswa):
		i = 0
		j = 0

		#perulangan untuk mencari data yang akan dihapus (berdasarkan nim)
		for mahasiswa in mmahasiswa:
			if(nim == mahasiswa.getNim()):
				del mmahasiswa[i]
				print("\nData berhasil dihapus!")
				j = 1
			i += 1

		#jika data tidak tersedia
		if(j == 0):
			print("\nData tidak tersedia!")

	#method untuk menampilkan data (read)
	def show(mmahasiswa):
		#output berupa tabel
		i = 0
		print("\nList Mahasiswa:")
		print("+=======================================+\n" + "|  Nama  |  NIM  |  Prodi  |  Fakultas  |\n" + "+=======================================+")
		for mahasiswa in mmahasiswa:
			print("| " + str(i + 1) + ". " + mahasiswa.getName() + " | " + mahasiswa.getNim() + " | " + mahasiswa.getMajor() + " | " + mahasiswa.getFaculty() + " |")
			print("+---------------------------------------+")
			i += 1