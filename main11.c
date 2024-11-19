#include <stdio.h>
#include <stdlib.h>

// Döngüsel faktöriyel hesaplama
int faktoriyel1(int sayi) {
    int sonuc = 1;
    int i;
    for (i = 1; i <= sayi; i++)
        sonuc *= i;
    return sonuc;
}

// Yinelemeli (Recursive) faktöriyel hesaplama
int faktoriyel2(int sayi) {
    if (sayi > 1)
        return sayi * faktoriyel2(sayi - 1);
    else
        return 1; // sayi2 <= 1 olduðunda 1 döner
}

int main11() {
    int sayi = 6;

    // Döngüsel fonksiyon kullanýmý
    printf("Döngüsel: %d! = %d\n", sayi, faktoriyel1(sayi));

    // Yinelemeli (Recursive) fonksiyon kullanýmý
    printf("Yinelemeli: %d! = %d\n", sayi, faktoriyel2(sayi));

    system("PAUSE");
    return 0;
}
