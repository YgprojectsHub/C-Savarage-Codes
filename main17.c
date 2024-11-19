#include <stdio.h>
#include <stdlib.h>

void islemYap(int dizi[], int boyut){
     int i;
     for(i=0; i<boyut; i++)
     dizi[i] = dizi[i]*2;
}

int main17(){
    // dizilerin fonk. gönd.
    
    int sayilar[] = {1, 3, 5, 7};
    islemYap(sayilar, 4);
    
    int i;
    for(i=0; i<4; i++)
    printf("%d \n", sayilar[i]);
        
    system("PAUSE");	
    return 0;
}

