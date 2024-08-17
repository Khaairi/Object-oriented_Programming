from Dosen import Dosen
# inisialisasi class Course
class Course:
	__namaMatkul = ""
	__dosenAmpu = Dosen()
	__mhsKontrak = []

	# constructor
	# untuk dosenAmpu dan mhsKontrak akan berisi object, composite dari class Dosen dan class Mahasiswa
	def __init__(self, dosen, mahasiswa, namaMatkul = ""):
		self.__mhsKontrak = []
		self.__namaMatkul = namaMatkul
		self.__dosenAmpu = dosen
		# karena list maka diinputnya menggunakan append
		self.__mhsKontrak.append(mahasiswa)

	# kumpulan method setter dan getter untuk tiap atribut
	def setNamaMatkul(self, namaMatkul):
		self.__namaMatkul = namaMatkul

	def getNamaMatkul(self):
		return self.__namaMatkul

	def setDosenAmpu(self, dosen):
		self.__dosenAmpu = dosen

	def getDosenAmpu(self):
		return self.__dosenAmpu

	def setMhsKontrak(self, mahasiswa):
		self.__mhsKontrak.append(mahasiswa)

	def getMhsKontrak(self):
		return self.__mhsKontrak
