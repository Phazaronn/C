/****************
 @phazaronn
Tarih:25.10.2022
Kodun amac�: Al�nan iki say�n�n d�rt i�lem kullan�larak ��karma �arpma ve b�lme i�lemlerinin fonksiyon bi�iminde yaz�lmas�
****************/

#include <stdio.h>

int main(void)

{
	//Kullan�lacak de�i�kenler tan�mlan�yor.
	double sonuc;
	double a;
	double b;

	//Toplama i�lemi.
	a=5.2;
	b=1.8;
	sonuc=a+b;
	//Sonu� ekrana yazd�r�l�yor.	
	printf("%f+%f=%f\n",a,b,sonuc );

	//��karma i�lemi.
	a=2.6;
	b=5.7;
	sonuc=a-b;
	//Sonu� ekrana yazd�r�l�yor.	
	printf("%f-%f=%f\n",a,b,sonuc );

	//�arpma i�lemi.
	a=1.3;
	b=5.3;
	sonuc=a*b;	
	//Sonu� ekrana yazd�r�l�yor.
	printf("%f*%f=%f\n",a,b,sonuc );


	//B�lme i�lemi.
	a=7.2;
	b=4.5;
	sonuc=a/b;
	//Sonu� ekrana yazd�r�l�yor.	
	printf("%f/%f=%f\n",a,b,sonuc );	


	//Enter tu�una bas�lana kadar bekler.
	getchar();

	//Programdan ��k�l�yor.
	return 0;
}
