#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main13()
{
    // string fonk.
    // strlen, strcpy, strcat, strupr, strlwr
    
    char isim1 [] = " Orhan Veli";
    char isim2 [50];
    char isim3 [] = "Oktay Rifat";
    
    int boyut = strlen(isim1);
    printf(" boyut : %d \n", boyut);
    
    strcpy(isim2, isim1);
    printf(" isim2 : %s \n", isim2);
    
    strcat(isim3, isim1);
    printf(" isim3 : %s \n", isim3);
    
    strupr(isim3);
    printf(" isim3 : %s \n", isim3);
    
    strlwr(isim3);
    printf(" isim3 : %s \n", isim3);
    
    system("PAUSE");	
    return 0;
}

