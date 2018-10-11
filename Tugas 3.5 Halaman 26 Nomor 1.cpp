#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{
	int angka;
	cout<<"Masukkan angka : ";
	cin>>angka;
	cout<<endl;
	string message;
	message = angka && angka%2 == 0 ? "Anda memasukkan bilangan genap" : "Anda memasukkan bilangan ganjil";
	cout<<message;
	getch();
	return 0;
}
