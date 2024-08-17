from Sivitas import Sivitas

#inisialisasi class Mahasiswa yang merupakan child dari class Sivitas
class Mahasiswa(Sivitas):
	# atribut
	__nim = ""
	__faculty = ""
	__major = ""

	# constructor
	def __init__(self, nik = "", name = "", gender = "", univ = "", email = "", nim = "", faculty = "", major = ""):
		super().__init__(nik, name, gender, univ, email)
		self.__nim = nim
		self.__faculty = faculty
		self.__major = major

	# kumpulan method setter dan getter untuk tiap atribut
	def setNim(self, nim):
		self.__nim = nim

	def getNim(self):
		return self.__nim

	def setFaculty(self, faculty):
		self.__faculty = faculty

	def getFaculty(self):
		return self.__faculty

	def setMajor(self, major):
		self.__major = major

	def getMajor(self):
		return self.__major