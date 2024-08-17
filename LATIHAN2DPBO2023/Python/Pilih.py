# Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

# import library
from Human import Mahasiswa

# inisialisasi class Pilih
class Pilih:
	# constructor
	def __init__(self):
		pass

	# method untuk menambahkan data
	def add(mmahasiswa):
		j = 0

		# inputan untuk data mahasiswa
		print("Masukkan NIK:", end="")
		nik = str(input())
		print("Masukkan Nama:", end="")
		name = str(input())
		print("Masukkan Jenis Kelamin:", end="")
		gender = str(input())
		print("Masukkan Asal Universitas:", end="")
		univ = str(input())
		print("Masukkan Email Universitas:", end="")
		email = str(input())
		print("Masukkan NIM:", end="")
		nim = str(input())
		print("Masukkan Fakultas:", end="")
		faculty = str(input())
		print("Masukkan Program Studi:", end="")
		major = str(input())

		# perulangan untuk pengecekan apakah data sudah tersedia (berdasarkan nik)
		for mahasiswa in mmahasiswa:
			# jika data sudah tersedia maka data tidak diinput ke list
			if(nik == mahasiswa.getNik()):
				j = 1
				print("\nTidak dapat menambahkan data, NIK sudah tersedia!")

		# jika data tidak tersedia
		if(j == 0):
			# instance object menggunakan class Mahasiswa
			temp = Mahasiswa()
			# set data ke object
			temp.setNik(nik)
			temp.setName(name)
			temp.setGender(gender)
			temp.setUniv(univ)
			temp.setEmail(email)
			temp.setNim(nim)
			temp.setFaculty(faculty)
			temp.setMajor(major)

			# push object ke list
			mmahasiswa.append(temp)
			print("\nData berhasil ditambahkan!")

	# method untuk menampilkan data
	def show(mmahasiswa):
		# output
		print("\nList Mahasiswa:")
		print("========================================")
		i = 0
		for mahasiswa in mmahasiswa:
			print(str(i + 1))
			print("NIK               : " + mahasiswa.getNik())
			print("Nama              : " + mahasiswa.getName())
			print("Jenis Kelamin     : " + mahasiswa.getGender())
			print("Asal Universitas  : " + mahasiswa.getUniv())
			print("Email Universitas : " + mahasiswa.getEmail())
			print("NIM               : " + mahasiswa.getNim())
			print("Fakultas          : " + mahasiswa.getFaculty())
			print("Program Studi     : " + mahasiswa.getMajor())
			print("----------------------------------------")
			i += 1
