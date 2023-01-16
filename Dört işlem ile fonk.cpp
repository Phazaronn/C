/****************
 @phazaronn
Tarih:25.10.2022
Kodun amacý: Alýnan iki sayýnýn dört iþlem kullanýlarak çýkarma çarpma ve bölme iþlemlerinin fonksiyon biçiminde yazýlmasý
****************/

#include <stdio.h>

int main(void)

{
	//Kullanýlacak deðiþkenler tanýmlanýyor.
	double sonuc;
	double a;
	double b;

	//Toplama iþlemi.
	a=5.2;
	b=1.8;
	sonuc=a+b;
	//Sonuç ekrana yazdýrýlýyor.	
	printf("%f+%f=%f\n",a,b,sonuc );

	//Çýkarma iþlemi.
	a=2.6;
	b=5.7;
	sonuc=a-b;
	//Sonuç ekrana yazdýrýlýyor.	
	printf("%f-%f=%f\n",a,b,sonuc );

	//Çarpma iþlemi.
	a=1.3;
	b=5.3;
	sonuc=a*b;	
	//Sonuç ekrana yazdýrýlýyor.
	printf("%f*%f=%f\n",a,b,sonuc );


	//Bölme iþlemi.
	a=7.2;
	b=4.5;
	sonuc=a/b;
	//Sonuç ekrana yazdýrýlýyor.	
	printf("%f/%f=%f\n",a,b,sonuc );	


	//Enter tuþuna basýlana kadar bekler.
	getchar();

	//Programdan çýkýlýyor.
	return 0;
}
