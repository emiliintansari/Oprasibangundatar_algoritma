#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float luas;
    int t,a;
    
    cout<<"Masukan Alas : ";
    cin>>a;
    cout<<"Masukan Tinggi : ";
    cin>>t;
    cout<<endl;
    
    luas=0.5*a*t;
    cout<<"Luas Segitiga = "<<luas<<endl;
  
	return 0;
}
