#include <stdio.h>
#include <stdlib.h>

int main15(){
    // goto
    
    int sayi=1;
    BAS:
    
    printf(" bir say� gir : \n");
    scanf("%d", &sayi);
    
    if(sayi!=0)
    goto BAS;
    
    
    printf(" son \n");
        
    system("PAUSE");	
    return 0;
}

