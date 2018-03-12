
#include <iostream>
using namespace std;
int n;

int faktorial(int n);

int main(){
  cout<<"Masukkan nilai n = "; cin>>n;
  cout<<" Faktorial "<<n<<" = "<<faktorial(n)<<endl;
}

int faktorial(int n){
  if (n==0){
      return 1;
    }
    else{
      return (n*faktorial(n-1));
  }
}
