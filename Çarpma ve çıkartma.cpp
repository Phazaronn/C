/****************
 @phazaronn
Tarih: 19/11/2022
Kodun amaci: Ýki sayýnýn hem çýkarma hem çarpma iþlemini yaptýran kod yazma 
****************/

#include <stdio.h>
#include <conio.h> // keypad için gerekli baþlýk dosyasý
#include <unistd.h> // usleep fonksiyonu için gerekli baþlýk dosyasý

int main()
{
  int sayi1, sayi2; // Kullanýcýdan alýnacak sayýlar
  int buyukSayi, kucukSayi; // Büyük ve küçük sayýlar
  int fark, carpim; // Fark ve çarpým sonuçlarý

  printf("Sayilari giriniz\n");

  printf("Lütfen ilk sayýyý girin: ");
  sayi1 = getch(); // keypad ile sayý girilir

  printf("Lütfen ikinci sayýyý girin: ");
  sayi2 = getch(); // keypad ile sayý girilir

  // Büyük ve küçük sayýlarý tespit et
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

  // Büyük sayýdan küçük sayýyý çýkart
  fark = buyukSayi - kucukSayi;
  printf("%d - %d = %d\n", buyukSayi, kucukSayi, fark);

  printf("Carpma tamamlandi\n");
  usleep(500000); // 0.5 saniye bekle

  // Ýki sayýyý çarp
  carpim = sayi1 * sayi2;
  printf("%d * %d = %d\n", sayi1, sayi2, carpim);

  return 0;
}

