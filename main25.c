#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
    char ad[50];
    char soyad[50];
    int yas;
};

int main25() {
    // struct - yapý (Interface)
    struct Ogrenci ogr1;
    
    // Karakter dizilerine deðer atama
    strcpy(ogr1.ad, "Y");
    strcpy(ogr1.soyad, "G");
    ogr1.yas = 33;
    
    // Yapý elemanlarýný yazdýrma
    printf("Ad: %s\n", ogr1.ad);
    printf("Soyad: %s\n", ogr1.soyad);
    printf("Yas: %d\n", ogr1.yas);
    
    system("PAUSE");
    return 0;
}
