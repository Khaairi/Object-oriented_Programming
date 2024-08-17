#import library
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Prodi import Prodi
from Course import Course

# instance object dari class Mahasiswa
mahasiswa1 = Mahasiswa("2121", "Resyad", "L", "UPI", "resyad@upi.edu", "1010", "FPMIPA", "Ilmu Komputer")
mahasiswa2 = Mahasiswa("2219", "Nadip", "L", "UPI", "nadipp@upi.edu", "1011", "FPMIPA", "Ilmu Komputer")
mahasiswa3 = Mahasiswa("2781", "Pikri", "L", "UPI", "pikrii@upi.edu", "1012", "FPMIPA", "Ilmu Komputer")

# instance object dari class Dosen
dosen1 = Dosen("1192", "Mr. John", "L", "UPI", "jhon2@upi.edu", "1191", "FPMIPA", "Ilmu Komputer", "S2", "Artificial Intelligence")
dosen2 = Dosen("1819", "Mrs. Rose", "P", "UPI", "roses@upi.edu", "1129", "FPMIPA", "Ilmu Komputer", "S3", "Pemrograman")
dosen3 = Dosen("2201", "Mrs. Renata", "P", "UPI", "renatagl@upi.edu", "1762", "FPMIPA", "Ilmu Komputer", "S2", "Grafikom")

# instance object dari class Course
course1 = Course(dosen1, mahasiswa1, "Artificial Intelligence")
course1.setMhsKontrak(mahasiswa2)
course2 = Course(dosen2, mahasiswa1, "Strukdat")
course2.setMhsKontrak(mahasiswa2)
course2.setMhsKontrak(mahasiswa3)
course3 = Course(dosen3, mahasiswa2, "Grafikom")
course3.setMhsKontrak(mahasiswa3)

# instance object dari class Prodi
prodi1 = Prodi(course1, mahasiswa1, dosen1, "Ilmu Komputer", "IK")
# lalu set untuk mahasiswa, dosen dan course yang belum diinput ke prodi
prodi1.setMahasiswa(mahasiswa2)
prodi1.setMahasiswa(mahasiswa3)
prodi1.setCourses(course2)
prodi1.setCourses(course3)
prodi1.setDosen(dosen2)
prodi1.setDosen(dosen3)

# output
print("=== Program Studi " + prodi1.getNamaProdi() + " ===")
print("Kode : " + prodi1.getKode())

print("List dosen pada program studi " + prodi1.getNamaProdi() + " : ")
i = 0
for dosen in prodi1.getDosen():
	print(str(i + 1) + ". " + dosen.getName() + " | " + dosen.getNik() + " | " + dosen.getUniv() + " | " + dosen.getEmail() + " | " + dosen.getNip() + " | " + dosen.getGender() + " | " + dosen.getLastEdu() + " | " + dosen.getMastery())
	i = i + 1
print("")

print("List mahasiswa pada program studi " + prodi1.getNamaProdi() + " : ")
i = 0
for mahasiswa in prodi1.getMahasiswa():
	print(str(i + 1) + ". " + mahasiswa.getName() + " | " + mahasiswa.getNim() + " | " + mahasiswa.getGender() + " | " + mahasiswa.getUniv() + " | " + mahasiswa.getEmail() + " | " + mahasiswa.getNim() + " | " + mahasiswa.getMajor())
	i = i + 1
print("")

print("List mata kuliah pada program studi " + prodi1.getNamaProdi() + " : ")
i = 0
j = 0
for course in prodi1.getCourses():
	print(str(i + 1) + ". " + course.getNamaMatkul())
	print("   " + "Dosen ampu : " + course.getDosenAmpu().getName())
	i = i + 1
	print("   " + "List mahasiswa yang mengontrak :")
	for mhs in course.getMhsKontrak():
		print("   " + str(j + 1) + ". " + mhs.getName())
		j = j + 1
	j = 0