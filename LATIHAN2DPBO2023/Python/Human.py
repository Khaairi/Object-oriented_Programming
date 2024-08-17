# Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.

# note: untuk penjelasan desain algoritma (inheritance, dll) ada di readme github

# inisialisasi class Human (sebagai base class / parent class utama)
class Human:
	# atribut
	__nik = ""
	__name = ""
	__gender = ""

	# constructor
	def __init__(self, nik = "", name = "", gender = ""):
		self.__nik = nik
		self.__name = name
		self.__gender = gender

	# kumpulan method setter dan getter untuk tiap atribut
	def setNik(self, nik):
		self.__nik = nik

	def getNik(self):
		return self.__nik

	def setName(self, name):
		self.__name = name

	def getName(self):
		return self.__name

	def setGender(self, gender):
		self.__gender = gender

	def getGender(self):
		return self.__gender

	#python tidak memerlukan destructor karena sudah garbage collection

# inisialisasi class Sivitas sebagai child dari class Human
class Sivitas(Human):
	# atribut
	__univ = ""
	__email = ""

	# constructor
	def __init__(self, univ = "", email = ""):
		self.__univ = univ
		self.__email = email

	# kumpulan method setter dan getter untuk tiap atribut
	def setUniv(self, univ):
		self.__univ = univ

	def getUniv(self):
		return self.__univ

	def setEmail(self, email):
		self.__email = email

	def getEmail(self):
		return self.__email

# inisialisasi class Mahasiswa sebagai child dari class Sivitas (juga "cucu" dari class Human)
class Mahasiswa(Sivitas):
	# atribut
	__nim = ""
	__faculty = ""
	__major = ""

	# constructor
	def __init__(self, nim = "", faculty = "", major = ""):
		self.__nim = nim
		self.__faculty =faculty
		self.__major =major

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