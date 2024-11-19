#include <stdio.h>
#include <stdlib.h>

// D�ng�sel fakt�riyel hesaplama
int faktoriyel1(int sayi) {
    int sonuc = 1;
    int i;
    for (i = 1; i <= sayi; i++)
        sonuc *= i;
    return sonuc;
}

// Yinelemeli (Recursive) fakt�riyel hesaplama
int faktoriyel2(int sayi) {
    if (sayi > 1)
        return sayi * faktoriyel2(sayi - 1);
    else
        return 1; // sayi2 <= 1 oldu�unda 1 d�ner
}

int main11() {
    int sayi = 6;

    // D�ng�sel fonksiyon kullan�m�
    printf("D�ng�sel: %d! = %d\n", sayi, faktoriyel1(sayi));

    // Yinelemeli (Recursive) fonksiyon kullan�m�
    printf("Yinelemeli: %d! = %d\n", sayi, faktoriyel2(sayi));

    system("PAUSE");
    return 0;
}
