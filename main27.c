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
    struct Student *ptr;
    ptr = ogr;
    
    int i;
    for(i=0; i<2; i++, ptr++)
    printf(" ad: %s, soyad: %s, yas: %d \n", ptr->ad, ptr->soyad, ptr->yas );
    
    system("PAUSE");
    return 0;
}
