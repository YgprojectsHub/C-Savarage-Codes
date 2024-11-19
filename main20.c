#include <stdio.h>
#include <stdlib.h>

void fonksiyonum(int dizi[][3], int satir){
    int i, j;
    
    for(i=0; i<satir; i++){
        for(j=0; j<3; j++)
        printf(" %d ", dizi[i][j]);
        
        printf("\n");     
                
    }
}

int main20(){
    // çok boyutlu dizinin fonksiyona gönderimi.
    
    int dizi[2][3] = {{1,3,5}, {2,4,6}};
    fonksiyonum(dizi, 2);
        
    system("PAUSE");	
    return 0;
}

