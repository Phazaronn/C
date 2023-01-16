/****************
 @phazaronn
Tarih: 19/11/2022
Kodun amaci: �ki say�n�n hem ��karma hem �arpma i�lemini yapt�ran kod yazma 
****************/

#include <stdio.h>
#include <conio.h> // keypad i�in gerekli ba�l�k dosyas�
#include <unistd.h> // usleep fonksiyonu i�in gerekli ba�l�k dosyas�

int main()
{
  int sayi1, sayi2; // Kullan�c�dan al�nacak say�lar
  int buyukSayi, kucukSayi; // B�y�k ve k���k say�lar
  int fark, carpim; // Fark ve �arp�m sonu�lar�

  printf("Sayilari giriniz\n");

  printf("L�tfen ilk say�y� girin: ");
  sayi1 = getch(); // keypad ile say� girilir

  printf("L�tfen ikinci say�y� girin: ");
  sayi2 = getch(); // keypad ile say� girilir

  // B�y�k ve k���k say�lar� tespit et
  if (sayi1 > sayi2)
  {
    buyukSayi = sayi1;
    kucukSayi = sayi2;
  }
  else
  {
    buyukSayi = sayi2;
    kucukSayi = sayi1;
  }

  printf("Cikartma tamamlandi\n");
  usleep(500000); // 0.5 saniye bekle

  // B�y�k say�dan k���k say�y� ��kart
  fark = buyukSayi - kucukSayi;
  printf("%d - %d = %d\n", buyukSayi, kucukSayi, fark);

  printf("Carpma tamamlandi\n");
  usleep(500000); // 0.5 saniye bekle

  // �ki say�y� �arp
  carpim = sayi1 * sayi2;
  printf("%d * %d = %d\n", sayi1, sayi2, carpim);

  return 0;
}

