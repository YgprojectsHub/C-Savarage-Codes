#include <stdio.h>
#include <stdlib.h>

int main(){
    // Tip Dönüşümleri
    // atoi(integer yani tam sayı değerine), atof(float yani ondalıklı değerine)
    
    char dizi [10];
    printf("deger giriniz : ");
    scanf("%s", dizi);
    
    int sayi= atoi(dizi);
    sayi*=2;
    float kesirli = atof(dizi);
    
    printf("girmis oldugunuz degerin TAM SAYI OLARAK iki kati : %d \n", sayi);
    printf("girmis oldugunuz degerin KESIRLI SAYI OLARAK iki kati : %f \n", kesirli);
        
    system("PAUSE");	
    return 0;
}

