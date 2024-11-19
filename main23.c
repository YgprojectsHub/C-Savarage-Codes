#include <stdio.h>
#include <stdlib.h>

int main23() {
    // Dosya i�lemleri
    // File - Tip 
    // fopen() - fonksiyon
    // File tipi ile CRUD i�lemleri
    
    // Dosya olu�turma ve yazma
    FILE *Dosya = fopen("deneme1.txt", "a");
    if (Dosya == NULL) {
        printf("Dosya olusturulamadi.\n");
        return 1;
    }
    printf("Dosya olusturuldu.\n");
    
    fprintf(Dosya, "Hello World!");
    printf("Dosyaya veri girisi yapildi.\n");
    fclose(Dosya); // Dosyay� kapatmay� unutmay�n

    // Dosya okuma
    FILE *DosyaOku = fopen("deneme1.txt", "r");
    if (DosyaOku == NULL) {
        printf("Dosya okunamadi.\n");
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(DosyaOku)) != EOF) {
        putchar(ch);
    }
    fclose(DosyaOku);

    // Dosya silme i�lemi
    int trueFalse = 0;
    printf("\nDosya silinsin mi? (1: Evet, 0: Hayir): ");
    scanf("%d", &trueFalse);
    
    if (trueFalse == 1) {
        if (remove("deneme1.txt") == 0) {
            printf("Dosya silindi.\n");
        } else {
            printf("Dosya silinemedi.\n");
        }
    } else {
        printf("Dosya silinmedi.\n");
    }

    system("PAUSE");
    return 0;
}
