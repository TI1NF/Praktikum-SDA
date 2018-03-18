// Algoritma Jumlah Deret Genap
#include <iostream>

using namespace std;

// Fungsi Jumlah Deret Genap
int Jumlah_Deret_Genap (int n)
{
	// Proses
	if (n == 1) // Proses Rumus Jumlah Deret Genap
		return 2;
	else if (n > 1) // Proses Jumlah Deret Genap
		return 2 * n + Jumlah_Deret_Genap(n-1);
}

	/* 
 	Contoh Penjelasan Algoritma :

	Dengan Ketentuan | n >= 1 |
	Jika Nilai n = 3

	Maka nilai n dimasukkan kedalam fungsi Jumlah_Deret_Genap(n)

	Jumlah_Deret_Genap(n) = 2 * n + Jumlah_Deret_Genap(n-1)

	Berikut Penjelasannya :
	Jumlah_Deret_Genap(3) = 2 * 3 + Jumlah_Deret_Genap(3-1)
	Jumlah_Deret_Genap(3) = 2 * 3 + Jumlah_Deret_Genap(2)
	Jumlah_Deret_Genap(3) = 6 + Jumlah_Deret_Genap(2)

	Karena Jumlah_Deret_Genap(2) tidak diketahui maka harus dicari terlebih dahulu dengan fungsi Jumlah_Deret_Genap(n)
	
	Jumlah_Deret_Genap(2) = 2 * 2 + Jumlah_Deret_Genap(2-1)
	Jumlah_Deret_Genap(2) = 4 + Jumlah_Deret_Genap(1)

	Dari ketentuan yang berlaku pada rumus deret jika n = 1 maka hasilnya adalah 2

	Jumlah_Deret_Genap(1) = 2
	Jumlah_Deret_Genap(2) = 4 + Jumlah_Deret_Genap(1)
	Jumlah_Deret_Genap(2) = 4 + 2
	Jumlah_Deret_Genap(2) = 6
		
	Jika Jumlah_Deret_Genap(2) sudah diketahui maka Jumlah_Deret_Genap(3) dapat diketahui

	Jumlah_Deret_Genap(2) = 6
	Jumlah_Deret_Genap(3) = 6 + Jumlah_Deret_Genap(2)
	Jumlah_Deret_Genap(3) = 6 + 6		
	Jumlah_Deret_Genap(3) = 12

	Maka Hasil Jumlah Deret Genap Nilai n = 3 Adalah 12
	*/


// Program Utama
int main()
{	
	// Deklarasi
	int n,i,j,k;

	cout << "---------- Algoritma Jumlah Deret Genap ----------" << endl << endl;

	// Input
	cout << "Dengan Ketentuan | n >= 1 |" << endl; // Ketentuan Bilangan Deret
	cout << "Masukkan Nilai n = ";
	cin >> n;

	// Verifikasi
	if (n < 1)
		cout << "\nError Masukkan Nilai n >= 1" << endl;
	else
	{
		// Output
		cout << "\nBerikut Jumlah Deret Genap(n) : " << endl;
		cout << "Proses Jumlah Deret Genap(" << n << ") = ";
		for (i = 0; i < n; i++) // Output Perulangan Proses Deret
		{
			k = k + 2;
			cout << k;

			if ((i + 1) == n)
			{
				cout << "";
			}
			else
				cout << " + ";
		}
		k = 0;
		cout << endl << endl;

		for (i = 0; i < n; i++)
		{
			cout << "Jumlah Deret Genap n = " << i + 1 << " Adalah ";
			for (j = 0; j <= i; j++)
			{
				if (i + 1 == 1)
					cout << "Dari Rumus";
				else
				{
					k = k + 2;
					cout << k;

					if (j + 1 == i + 1)
						cout << "";
					else
						cout << " + ";
				}
			}
			k = 0;
			cout << " = " << Jumlah_Deret_Genap(n-(n-(i+1))) << endl;
		}

		cout << "\nJumlah Deret Genap(" << n << ") = " << Jumlah_Deret_Genap(n) << endl; // Output Hasil Jumlah Deret Genap Dari Nilai n
	}
}
