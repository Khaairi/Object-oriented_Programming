/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//library yang digunakan
import java.util.Scanner;
import java.util.ArrayList;

//inisialisasi class CRUD
public class CRUD
{
	//atribut sebagai tempat tampung
	String name;
	String nim;
	String major;
	String faculty;
	int i, j;

	//membuat scanner untuk inputan
	Scanner sc = new Scanner(System.in);

	//constructor kosong
	public CRUD()
	{

	}

	//method untuk untuk menambahkan data (create)
	public void add(ArrayList<Mahasiswa> list)
	{
		//instance object menggunakan class Mahasiswa
		Mahasiswa temp = new Mahasiswa();
		j = 0;

		//inputan data mahasiswa
		System.out.print("Masukkan Nama:");
		name = sc.next();
		System.out.print("Masukkan NIM:");
		nim = sc.next();
		System.out.print("Masukkan Program Studi:");
		major = sc.next();
		System.out.print("Masukkan Fakultas:");
		faculty = sc.next();

		//perulangan untuk pengecekan apakah data sudah tersedia (berdasarkan nim)
		for(i = 0; i < list.size(); i++)
		{
			if(nim.equals(list.get(i).getNim()))
			{
				System.out.println("\nTidak dapat menambahkan data, NIM sudah tersedia!");
				j = 1;	
			}
		}

		//jika data belum tersedia maka set data dan masukkan ke list
		if(j == 0)
		{
			temp.setName(name);
			temp.setNim(nim);
			temp.setMajor(major);
			temp.setFaculty(faculty);

			list.add(temp);
			System.out.println("\nData berhasil ditambahkan!");
		}
	}

	//method untuk mengubah data (update)
	public void update(String nim, ArrayList<Mahasiswa> list)
	{
		j = 0;

		//perulangan untuk mencari data mahasiswa yang akan diubah (berdasarkan nim)
		for(i = 0; i < list.size(); i++)
		{
			//jika ketemu maka ubah data dengan inputan baru
			if(nim.equals(list.get(i).getNim()))
			{
				System.out.print("Masukkan Nama:");
				name = sc.next();
				System.out.print("Masukkan NIM:");
				nim = sc.next();
				System.out.print("Masukkan Program Studi:");
				major = sc.next();
				System.out.print("Masukkan Fakultas:");
				faculty = sc.next();

				list.get(i).setName(name);
				list.get(i).setNim(nim);
				list.get(i).setMajor(major);
				list.get(i).setFaculty(faculty);

				System.out.println("\nData berhasil diubah!");
				j = 1;
			}
		}

		//jika data tidak tersedia
		if(j == 0)
		{
			System.out.println("\nData tidak tersedia!");
		}
	}

	//method untuk menghapus data (delete)
	public void delete(String nim, ArrayList<Mahasiswa> list)
	{
		j = 0;

		//perulangan untuk mencari data mahasiswa yang akan dihapus (berdasarkan nim)
		for(i = 0; i < list.size(); i++)
		{
			//jika ketemu maka hapus data
			if(nim.equals(list.get(i).getNim()))
			{
				list.remove(list.get(i));
				System.out.println("\nData berhasil dihapus!");
				j = 1;
			}
		}

		//jika data tidak tersedia
		if(j == 0)
		{
			System.out.println("\nData tidak tersedia!");
		}
	}

	//method untuk menampilkan data (read)
	public void show(ArrayList<Mahasiswa> list)
	{
		//output berupa tabel
		System.out.println("\nList Mahasiswa:");
		System.out.println("+=======================================+\n" + "|  Nama  |  NIM  |  Prodi  |  Fakultas  |\n" + "+=======================================+");
		for(i = 0; i < list.size(); i++)
		{
			System.out.println("| " + Integer.toString(i + 1) + ". " + list.get(i).getName() + " | " + list.get(i).getNim() + " | " + list.get(i).getMajor() + " | " + list.get(i).getFaculty() + " |");
			System.out.println("+---------------------------------------+");
		}
	}
}