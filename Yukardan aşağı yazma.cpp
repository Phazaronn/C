/****************
 @phazaronn
Tarih: 25/10/2022
Kodun amaci: Rakamlar� ba�tan sona ve sondan ba�a do�ru g�steren kod yazma
****************/

#include<stdio.h>

int main(){

    int dizi[10] = {0,1,2,3,4,5,6,7,8,9};
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",dizi[i]);
    }

    printf("----------------\n");

    for (int i = 9; i >= 0; i--)
    {
       printf("%d\n",dizi[i]);
    }
    
    
    return 0;
}
