# Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

#deklarasi class Mahasiswa
class Mahasiswa:
	#atribut (private)
	__name = ""
	__nim = ""
	__major = ""
	__faculty = ""

	#constructor
	def __init__(self, name = "", nim = "", major = "", faculty = ""):
		self.__name = name
		self.__nim = nim
		self.__major = major
		self.__faculty = faculty

	#method untuk set nama mahasiswa
	def setName(self, name):
		self.__name = name

	#method untuk mendapatkan value dari nama
	def getName(self):
		return self.__name

	#method untuk set nim
	def setNim(self, nim):
		self.__nim = nim

	#method untuk mendapatkan value dari nim
	def getNim(self):
		return self.__nim

	#method untuk set program studi
	def setMajor(self, major):
		self.__major = major

	#method untuk mendapatkan value dari program studi
	def getMajor(self):
		return self.__major

	#method untuk set fakultas
	def setFaculty(self, faculty):
		self.__faculty = faculty

	#method untuk mendapatkan value dari fakultas
	def getFaculty(self):
		return self.__faculty

	#bahasa python tidak memerlukan destructor karena sudah ada garbage collector