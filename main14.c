#include <stdio.h>
#include <stdlib.h>

int main()
{
    // break, continue;
    
    int i;
    
    for(i=0; i<10; i++){
        if(i==5)
        //continue; // 5 i atla baþlat
        //break; // - 5 te býrak
        
        printf(" i nin degeri : %d \n", i);
    }
        
    system("PAUSE");	
    return 0;
}

