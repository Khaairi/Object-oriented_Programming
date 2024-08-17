# inisialisasi class Prodi
class Prodi:
	__namaProdi = ""
	__kode = ""
	__courses = []
	__mahasiswa = []
	__dosen = []

	# constructor
	# untuk courses, mahasiswa, dosen akan diinput dengan object, composite dari class Mahasiswa, class Dosen dan class Course
	def __init__(self, course, mahasiswa, dosen, namaProdi = "", kode = ""):
		self.__namaProdi = namaProdi
		self.__kode = kode
		# karena berbentuk list, maka diinputnya menggunakan append
		# nantinya list akan berisi kumpulan object
		self.__courses.append(course)
		self.__mahasiswa.append(mahasiswa)
		self.__dosen.append(dosen)

	# kumpulan method setter dan getter untuk tiap atribut
	def setNamaProdi(self, namaProdi):
		self.__namaProdi = namaProdi

	def getNamaProdi(self):
		return self.__namaProdi

	def setKode(self, kode):
		self.__kode = kode

	def getKode(self):
		return self.__kode

	def setCourses(self, course):
		self.__courses.append(course)

	def getCourses(self):
		return self.__courses

	def setMahasiswa(self, mahasiswa):
		self.__mahasiswa.append(mahasiswa)

	def getMahasiswa(self):
		return self.__mahasiswa

	def setDosen(self, dosen):
		self.__dosen.append(dosen)

	def getDosen(self):
		return self.__dosen