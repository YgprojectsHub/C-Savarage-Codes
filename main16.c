#include <stdio.h>
#include <stdlib.h>

int hesapla2(int sayi){
    printf(" sayinin adresi : %d", sayi );
}

int main16(){
    // referans arg�man g�ndermek
    
    int a = 5;
    hesapla2(&a);
        
    system("PAUSE");	
    return 0;
}

