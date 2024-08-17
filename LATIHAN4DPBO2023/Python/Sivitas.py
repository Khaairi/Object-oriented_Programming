from Human import Human

#inisialisasi class Sivitas yang merupakan child dari class Human
class Sivitas(Human):
	# atribut
	__univ = ""
	__email = ""

	# constructor
	def __init__(self, nik = "", name = "", gender = "", univ = "", email = ""):
		super().__init__(nik, name, gender)
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