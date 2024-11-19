#include <stdio.h>
#include <stdlib.h>

int *hesapla(int d1[], int n1, int d2[], int n2, int d3[]){
    int i, j;
    
    for(i=0; i<n1; i++)
    d3[i] = d1[i];
    
    for(j=0; j<n2; j++)
    d3[i++] = d2[j];
    
    return d3;
}

int main(){
    // fonk. dizi döndürmesi
    
    int dizi1[] = {1, 3, 5};
    int dizi2[] = {2, 4, 6, 8};
    int dizi3[7];
    
    hesapla3(dizi1, 3, dizi2, 4, dizi3);
    
    int i;
    for(i=0; i<7; i++)
    printf(" %d ", dizi3[i]);
        
    system("PAUSE");	
    
    return 0;
}

