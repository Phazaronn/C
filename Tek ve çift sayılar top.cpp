/****************
 @phazaronn
Tarih: 25/10/2022
Kodun amaci: Tek sayýlarý ve çift sayýlarý kendi içinde toplayan kod yazma
****************/


#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	// Kullanýcýnýn girdiði 2 sayý arasýndaki asal sayýlarý bulacaðýz.
	int sayi;
	int tekAdet=0,ciftAdet=0;
	int tekToplam=0,ciftToplam=0;
	for(int i=1;i<=10;i++)
	{
		cout<<i<<". Sayý : ";
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
	cout<<"Girilen Tek Sayý Adeti : "<<tekAdet<<endl;
	cout<<"Girilen Tek Sayýlarýn Toplamý : "<<tekToplam<<endl;
	cout<<"Girilen Çift Sayý Adeti : "<<ciftAdet<<endl;
	cout<<"Girilen Çift Sayýlarýn Toplamý : "<<ciftToplam<<endl;
}
