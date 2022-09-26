#include <iostream>
/*menghindari konflik */
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, hasil;
	
	cout<<"luas persegi"<<endl;
	
	cout<<"Maskan panjang : "<<endl;
	cin>>a;
	cout<<"Masukan lebar : "<<endl;
	cin>>b;
	hasil = a*b;
	cout<<"hasil: "<<hasil<<endl;
	
	return 10;
}
