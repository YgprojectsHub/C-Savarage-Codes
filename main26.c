#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
    char ad[50];
    char soyad[50];
    int yas;
};

int main26() {
    // Yap� ile dizinin bir arada kullan�m�
    struct Ogrenci ogr[2] = { "orhan", "veli", 35, "ahmet", "oktay", 23 };
    printf("%s \n", ogr[1].soyad);
    
    int i;
    for(i=0; i<2; i++)
    printf(" ad: %s, soyad: %s, yas: %d \n", ogr[i].ad, ogr[i].soyad, ogr[i].yas );
    
    system("PAUSE");
    return 0;
}
