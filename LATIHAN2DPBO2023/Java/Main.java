/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//import library
import java.util.Scanner;
import java.util.ArrayList;

public class Main
{
	public static void main(String[] args)
	{
		//deklarasi list / arraylist
		ArrayList<Mahasiswa> list = new ArrayList<>();
		//instance object menggunakan class Pilih
		Pilih pilihan = new Pilih();
		//membuat scanner
		Scanner sc = new Scanner(System.in);
		int n = 0;
	
		//pilihan menu
		do
		{
			System.out.println("\nMasukkan menu (1 : Input, 2 : Tampil, 3 : Keluar):");
			n = sc.nextInt();
			if(n != 3)
			{
				if(n == 1)
				{
					pilihan.add(list);
				}

				if(n == 2)
				{
					pilihan.show(list);
				}
			}
		}while(n != 3);

		sc.close();
	}
}