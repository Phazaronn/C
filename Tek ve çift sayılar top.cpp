/****************
 @phazaronn
Tarih: 25/10/2022
Kodun amaci: Tek say�lar� ve �ift say�lar� kendi i�inde toplayan kod yazma
****************/


#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
	// Kullan�c�n�n girdi�i 2 say� aras�ndaki asal say�lar� bulaca��z.
	int sayi;
	int tekAdet=0,ciftAdet=0;
	int tekToplam=0,ciftToplam=0;
	for(int i=1;i<=10;i++)
	{
		cout<<i<<". Say� : ";
		cin>>sayi;
		
		if(sayi%2==1)
		{
			tekAdet++;
			tekToplam+=sayi;
		}
		else
		{
			ciftAdet++;
			ciftToplam+=sayi;
		}
		
	}
	cout<<endl;
	cout<<"Girilen Tek Say� Adeti : "<<tekAdet<<endl;
	cout<<"Girilen Tek Say�lar�n Toplam� : "<<tekToplam<<endl;
	cout<<"Girilen �ift Say� Adeti : "<<ciftAdet<<endl;
	cout<<"Girilen �ift Say�lar�n Toplam� : "<<ciftToplam<<endl;
}
