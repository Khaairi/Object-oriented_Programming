from Sivitas import Sivitas

#inisialisasi class Dosen yang merupakan child dari class Sivitas
class Dosen(Sivitas):
	# atribut
	__nip = ""
	__faculty = ""
	__major = ""
	__lastEdu = ""
	__mastery = ""

	# constructor
	def __init__(self, nik = "", name = "", gender = "", univ = "", email = "", nip = "", faculty = "", major = "", lastEdu = "", mastery = ""):
		super().__init__(nik, name, gender, univ, email)
		self.__nip = nip
		self.__faculty = faculty
		self.__major = major
		self.__lastEdu = lastEdu
		self.__mastery = mastery

	# kumpulan method setter dan getter untuk tiap atribut
	def setNip(self, nip):
		self.__nip = nip

	def getNip(self):
		return self.__nip

	def setFaculty(self, faculty):
		self.__faculty = faculty

	def getFaculty(self):
		return self.__faculty

	def setMajor(self, major):
		self.__major = major

	def getMajor(self):
		return self.__major

	def setLastEdu(self, lastEdu):
		self.__lastEdu = lastEdu

	def getLastEdu(self):
		return self.__lastEdu

	def setMastery(self, mastery):
		self.__mastery = mastery

	def getMastery(self):
		return self.__mastery