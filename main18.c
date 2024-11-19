#include <stdio.h>
#include <stdlib.h>

int main18(){
    // dizilerin pointerlarla kul.
    
    int dizi[] = {3, 5, 7, 11};
    int *ptr;
    ptr=dizi;
    
    printf(" ptrnin gosterdigi deger : %d \n", *ptr);
    printf(" ptrnin gosterdigi deger : %d \n", *(ptr+2));
    
    int i;
    for(i=0; i<5; i++)
    printf(" %d ", *(ptr + i));
    
    *( ptr + 2) = *( ptr + 2 )*2;
    printf(" dizinin 2. indis degeri : %d \n", dizi[2]);
        
    system("PAUSE");	
    return 0;
}

