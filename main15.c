#include <stdio.h>
#include <stdlib.h>

int main(){
    // goto
    
    int sayi=1;
    BAS:
    
    printf(" bir sayý gir : \n");
    scanf("%d", &sayi);
    
    if(sayi!=0)
    goto BAS;
    
    
    printf(" son \n");
        
    system("PAUSE");	
    return 0;
}

