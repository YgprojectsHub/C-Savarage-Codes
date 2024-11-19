#include <stdio.h>
#include <stdlib.h>

int main3()
{
    // Döngüler
    // for - while ve do while
    
    //int i;
    //for (i=0; i<11; i++){
            //printf("%d \n", i);
    //}
    //printf("donguden cikildi. \n");
    
    //int sayi= 5;
    //while( sayi < 10 ){ //Ýlk önce koþul sonra iþlem
           //printf("%d \n", sayi);
           //sayi++;
    //}
    
    int sayi= 10;
    do{ //Ýlk önce iþlem sonra koþul
        printf("%d \n", sayi);
        sayi++;
    }while( sayi < 10 );
    
    system("PAUSE");	
    return 0;
}

