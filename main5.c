#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Çok Boyutlu Diziler
    int sayilar[2][3]; 

    int i;
    int j;
    for (i = 0; i < 2; i++) {        // Satırlar için döngü
        for (j = 0; j < 3; j++) {    // Sütunlar için döngü
            printf("Dizinin [%d][%d]. degerini giriniz : ", i,j);
            scanf("%d", &sayilar[i][j]);
        }
    }
    
    printf("girmis oldugumuz degerler \n");
    
    for (i = 0; i < 2; i++) {        // Satırlar için döngü
        for (j = 0; j < 3; j++) {    // Sütunlar için döngü
            printf(" %d ", sayilar[i][j]);
        }
        printf("\n");
    }
    
    system("PAUSE");	
    return 0;
}
