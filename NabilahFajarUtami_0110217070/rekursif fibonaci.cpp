#include<iostream>
using namespace std;

int fibo(int n)
{
   if(n==0)
     return 0;
   else if(n==1 || n==2)
     return 1;
   else
     //fungsi rekursif
     return fibo(n-1)+fibo(n-2);
}

int main()
{
      int bil;

      cout<<"\tFungsi Rekursif Bilangan Fibonacci"<<endl;
      cout<<"\t=================================="<<endl;        
      cout<<"\nMasukkan bilangan : ";
      cin>>bil;
      //pemanggilan fungsi
      cout<<"Fibonacci("<<bil<<") = "<<fibo(bil);
      
      return (0);
}
