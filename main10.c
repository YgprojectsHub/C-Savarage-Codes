#include <stdio.h>
#include <stdlib.h>

int main10()
{
    // Göstericiler - pointers
    
    int sayi= 5;
    int *ptr = &sayi;
    
    printf(" sayi degeri : %d \n", sayi);
    printf(" sayinin adresi : %d \n\n", &sayi);
    printf(" pointer tuttugu deger : %d \n", *ptr);
    printf(" pointer tuttugu adresi : %d \n\n", ptr);
    
    *ptr= 20;
    
    printf(" sayi degiskenin degeri : %d \n\n", sayi);
    
    system("PAUSE");	
    return 0;
}

