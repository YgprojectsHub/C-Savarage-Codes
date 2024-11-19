#include <stdio.h>
#include <stdlib.h>

void selamlar(){
     printf(" selamlar C ... \n");     
}

int hesapla(int s1, int s2){
     return s1+s2;  
}

int main6()
{
    // Fonksiyonlar
    // Deðer döndüren fonk. ve deðer döndürmeyen fonk.(void func.)
    
    selamlar();
    int sonuc = hesapla(5, 6);
    
    printf("Sonuc : %d \n", sonuc);
    
    system("PAUSE");	
    return 0;
}
