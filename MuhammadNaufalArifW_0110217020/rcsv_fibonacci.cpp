#include <iostream>

using namespace std;

int n;															//deklarasi variabel universal n sebagai jumlah deret

int F(int n);													//deklarasi fungsi untuk menghitung fibonacci

int main()														//program utama
{
	cout<<" Masukkan nilai n = "; cin>>n;						//input nilai n (jumlah deret)
	cout<<" Fibonacci deret ke "<<n<<" = "<<F(n)<<endl;			//output akhir
}

int F(int n)													//fungsi operasi deret fibonacci
{
	if(n==1){													//
		return 1;												//
	}
	else if(n==2){												//
		return 1;												//
	}
	else if(n>2){												//
		return F(n-1)+F(n-2);									//
	}
}

