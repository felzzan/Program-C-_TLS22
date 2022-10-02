//"Program Untuk Melakukan Operasi Dua Bilangan"

#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int bil1,bil2, pilihan;
	float hasil;
	string operasi;
	
	cout<<"Program Untuk Melakukan Operasi Dua Bilangan"<<endl;
	cout<<"Operasi Bilangan :"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<endl;
	
	cout<<"Pilih Operasi Bilangan : ";
	cin>>pilihan;
	cout<<"Masukkan bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan bilangan kedua : ";
	cin>>bil2;	
	
	switch(pilihan){
	        case 1 : hasil=bil1+bil2;
			operasi='+';
			break;
			case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"Hasil Operasi Bilangan"<<endl;
	cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
	return 0;
}
