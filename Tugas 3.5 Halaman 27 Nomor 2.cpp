#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int suhu;
	cout<<"Masukkan suhu :";
	cin>>suhu;
	
	if (suhu > 26)
	{
		cout<<"PANAS";
	}
	else if (suhu >= 22 && suhu <= 26)
	{
		cout<<"NORMAL";
	}
	if (suhu < 20)
	{
		cout<<"DINGIN";
	}
	return 0;
}
