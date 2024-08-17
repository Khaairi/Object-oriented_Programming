/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//import library
import java.util.Scanner;
import java.util.ArrayList;

//inisialisasi class Pilih
public class Pilih
{
	//atribut (hanya untuk tampungan inputan)
	String nik;
	String name;
	String gender;
	String univ;
	String email;
	String nim;
	String faculty;
	String major;
	int i, j;

	//membuat scanner
	Scanner sc = new Scanner(System.in);

	//constructor
	public Pilih()
	{
	}

	//method untuk menambahkan data
	public void add(ArrayList<Mahasiswa> list)
	{
		//instance objeck menggunakan class Mahasiswa
		Mahasiswa temp = new Mahasiswa();
		j = 0;
		//inputan untuk data mahasiswa
		System.out.print("Masukkan NIK:");
		nik = sc.next();
		System.out.print("Masukkan Nama:");
		name = sc.next();
		System.out.print("Masukkan jenis Kelamin:");
		gender = sc.next();
		System.out.print("Masukkan Asal Universitas:");
		univ = sc.next();
		System.out.print("Masukkan Email Universitas:");
		email = sc.next();
		System.out.print("Masukkan NIM:");
		nim = sc.next();
		System.out.print("Masukkan Fakultas:");
		faculty = sc.next();
		System.out.print("Masukkan Program Studi:");
		major = sc.next();

		//pengecekan apakah data sudah tersedia di list (berdasarkan nik)
		for(i = 0; i < list.size(); i++)
		{
			if(nik.equals(list.get(i).getNik()))
			{
				System.out.println("\nTidak dapat menambahkan data, NIK sudah tersedia!");
				j = 1;	
			}
		}

		//jika data tidak tersedia maka set inputan dan push ke list
		if(j == 0)
		{
			temp.setNik(nik);
			temp.setName(name);
			temp.setGender(gender);
			temp.setUniv(univ);
			temp.setEmail(email);
			temp.setNim(nim);
			temp.setFaculty(faculty);
			temp.setMajor(major);

			list.add(temp);
			System.out.println("\nData berhasil ditambahkan!");
		}
	}

	//method untuk menampilkan data
	public void show(ArrayList<Mahasiswa> list)
	{
		System.out.println("\nList:");
		for(i = 0; i < list.size(); i++)
		{
			System.out.println(Integer.toString(i + 1) + ".");
			System.out.println("NIK:" + list.get(i).getNik());
			System.out.println("Nama:" + list.get(i).getName());
			System.out.println("Jenis Kelamin:" + list.get(i).getGender());
			System.out.println("Asal Universitas:" + list.get(i).getUniv());
			System.out.println("Email Univeritas:" + list.get(i).getEmail());
			System.out.println("NIM:" + list.get(i).getNim());
			System.out.println("Fakultas:" + list.get(i).getFaculty());
			System.out.println("Prograsm Studi:" + list.get(i).getMajor());
		}
	}
}