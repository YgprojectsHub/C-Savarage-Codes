#include <stdio.h>
#include <stdlib.h>

int main4()
{
    // Tek Boyutlu Diziler
    
    int sayi= 20;
    int sayilar [5];
    
    sayilar[0]= 6;
    sayilar[1]= 7;
    printf("%d \n", sayilar[1]);
    sayilar[2]= 8;
    sayilar[3]= 9;
    sayilar[4]= 10;
    
    printf("Dizinin elemanlari:\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("sayilar[%d] = %d\n", i, sayilar[i]);
    }
    
    system("PAUSE");	
    return 0;
}

