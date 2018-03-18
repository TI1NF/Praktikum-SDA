// Algoritma Jumlah Deret
#include <iostream>

using namespace std;

// Fungsi Jumlah Deret
int Jumlah_Deret (int n)
{
	// Proses
	if (n == 1) // Proses Rumus Jumlah Deret
		return 1;
	else if (n > 1) // Proses Jumlah Deret
		return n + Jumlah_Deret(n-1);
}

	/* 
 	Contoh Penjelasan Algoritma :

	Dengan Ketentuan | n >= 1 |
	Jika Nilai n = 3

	Maka nilai n dimasukkan kedalam fungsi Jumlah_Deret(n)

	Jumlah_Deret(n) = n + Jumlah_Deret(n-1)

	Berikut Penjelasannya :
	Jumlah_Deret(3) = 3 + Jumlah_Deret(3-1)
	Jumlah_Deret(3) = 3 + Jumlah_Deret(2)

	Karena Jumlah_Deret(2) tidak diketahui maka harus dicari terlebih dahulu dengan fungsi Jumlah_Deret(n)
	
	Jumlah_Deret(2) = 2 + Jumlah_Deret(2-1)
	Jumlah_Deret(2) = 2 + Jumlah_Deret(1)

	Dari ketentuan yang berlaku pada rumus Jumlah Deret jika n = 1 maka hasilnya adalah 1

	Jumlah_Deret(1) = 1
	Jumlah_Deret(2) = 2 + Jumlah_Deret(1)
	Jumlah_Deret(2) = 2 + 1
	Jumlah_Deret(2) = 3
		
	Jika Jumlah_Deret(2) sudah diketahui maka Jumlah_Deret(3) dapat diketahui

	Jumlah_Deret(2) = 3
	Jumlah_Deret(3) = 3 + Jumlah_Deret(2)
	Jumlah_Deret(3) = 3 + 3
	Jumlah_Deret(3) = 6

	Maka Hasil Jumlah Deret Nilai n = 3 Adalah 6
	*/

// Program Utama
int main()
{	
	// Deklarasi
	int n,i,j;

	cout << "---------- Algoritma Jumlah Deret ----------" << endl << endl;

	// Input
	cout << "Dengan Ketentuan | n >= 1 |" << endl; // Ketentuan Bilangan Jumlah Deret
	cout << "Masukkan Nilai n = ";
	cin >> n;

	// Verifikasi
	if (n < 1)
		cout << "\nError Masukkan Nilai n >= 1" << endl;
	else
	{
		// Output
		cout << "\nBerikut Jumlah Deret(n) : " << endl;
		cout << "Proses Jumlah Deret(" << n << ") = ";
		for (i = 0; i < n; i++) // Output Perulangan Proses Jumlah Deret
		{
			cout << i + 1;
			if ((i + 1) == n)
			{
				cout << "";
			}
			else
				cout << " + ";
		}
		cout << endl << endl;

		for (i = 0; i < n; i++)
		{
			cout << "Jumlah Deret n = " << i + 1 << " Adalah ";
			for (j = 0; j <= i; j++)
			{
				if (i + 1 == 1)
					cout << "Dari Rumus";
				else
				{
					cout << j + 1;
					if (j + 1 == i + 1)
						cout << "";
					else
						cout << " + ";
				}
			}
			cout << " = " << Jumlah_Deret(n-(n-(i+1))) << endl;
		}
		
		cout << "\nJumlah Deret(" << n << ") = " << Jumlah_Deret(n) << endl; // Output Hasil Jumlah Deret Dari Nilai n
	}
}
