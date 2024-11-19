#include <stdio.h>

int main()
{
    int s1, s2, sonuc;
    char ch;
    int is_valid = 1; // Sonucun geçerli olup olmadığını kontrol etmek için
    
    printf("2 adet sayi giriniz: ");
    scanf("%d", &s1);
    scanf("%d", &s2);
    
    // Buffer'daki '\n' karakterini temizlemek için boşluklu scanf
    printf("Islem secimini yapiniz (+ - * /): ");
    scanf(" %c", &ch); // Boşluk ekleyerek buffer temizlenir

    switch (ch) {
        case '+':
            sonuc = s1 + s2;
            break;
        case '-':
            sonuc = s1 - s2;
            break;
        case '*':
            sonuc = s1 * s2;
            break;
        case '/':
            if (s2 != 0) {
                sonuc = s1 / s2;
            } else {
                printf("Hata: Sifira bolme islemi yapilamaz!\n");
                is_valid = 0; // Geçersiz sonuç
            }
            break;
        default:
            printf("Hatali islem secimi\n");
            is_valid = 0; // Geçersiz sonuç
            break;
    }

    if (is_valid) {
        printf("Sonuc: %d\n", sonuc);
    }

    system("PAUSE");	
    return 0;
}
