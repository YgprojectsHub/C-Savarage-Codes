#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
    char ad[50];
    char soyad[50];
    int yas;
};

int main27() {
    // Yapý ile dizinin bir arada kullanýmý
    struct Ogrenci ogr[2] = { "orhan", "veli", 35, "ahmet", "oktay", 23 };
    struct Ogrenci *ptr;
    ptr = ogr;
    
    int i;
    for(i=0; i<2; i++, ptr++)
    printf(" ad: %s, soyad: %s, yas: %d \n", ptr->ad, ptr->soyad, ptr->yas );
    
    system("PAUSE");
    return 0;
}
