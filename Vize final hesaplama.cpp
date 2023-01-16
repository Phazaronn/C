/****************
 @phazaronn
Tarih: 02/01/2023
Kodun amaci: 60'a 40 olan yüzdelik bir sistemde vize final ortalamasýný yazdýrma
****************/

#include <stdio.h>

int main()
{
	int i;
    int k;
    int yo;
    int a[5][3] = { { 1, 45, 10}, 
	                { 2, 90, 89 }, 
	                { 3, 20, 90}, 
	                { 4, 13, 65 }, 
                    { 5, 56, 57 } 
    };
    
   
    	printf("   No |  Vize | Final | Ortalama");
		printf("\n");
			printf("   -----------------------------");
		printf("\n");
    
    
    
    
    for ( i = 0; i < 5; ++i) {
        
        for ( k = 0; k < 3; ++k)
      
            {
	    printf("%4d ", a[i][k]);
	    printf(" | ");

            }
            yo=(a[i][1] * 0.4) + (a[i][2] * 0.6);
             
             printf("%4d ", yo);
            
	    
	    printf("\n");
		printf("   -----------------------------");
		printf("\n");
    }
    
	return 0;
}

