#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char ad[50];
    char soyad[50];
    int yas;
};

int main() {
    // Yapý ile dizinin bir arada kullanýmý
    struct Student ogr[2] = { "orhan", "veli", 35, "ahmet", "oktay", 23 };
    printf("%s \n", ogr[1].soyad);
    
    int i;
    for(i=0; i<2; i++)
    printf(" ad: %s, soyad: %s, yas: %d \n", ogr[i].ad, ogr[i].soyad, ogr[i].yas );
    
    system("PAUSE");
    return 0;
}
