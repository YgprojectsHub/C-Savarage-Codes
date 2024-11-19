#include <stdio.h>
#include <stdlib.h>

int hesapla(int sayi){
    printf(" sayinin adresi : %d", sayi );
}

int main(){
    // referans argüman göndermek
    
    int a = 5;
    hesapla2(&a);
        
    system("PAUSE");	
    return 0;
}

