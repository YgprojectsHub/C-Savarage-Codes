#include <stdio.h>
#include <stdlib.h>

int main(){
    // dinamik bellek yönetimi.
    // calloc, malloc, free
    
    int *dizi;
    int n, i;
    
    printf(" dizinin eleman sayisini giriniz : ");
    scanf("%d", &n);
    
    //dizi = calloc(n, sizeof(int));  // *
    dizi = malloc(n * sizeof(int));
    
    for(i=0; i<n; i++)
    printf(" %d ", dizi[i]);
    
    free(dizi); // *
    
    printf("\n");
    for(i=0; i<n; i++)
    printf(" %d ", dizi[i]);
        
    system("PAUSE");	
    return 0;
}

