#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main8()
{
    // Matematiksel fonksiyonlar.
    // floor - aþaðýya yuvarla.
    // ceil - yukarýya yuvarla.
    // fabs - eksiyi artýya çevirir.
    // pow - üssünü alýr.
    // sqrt - karesini alýr.
    // sin - sayýnýn sinüs deðerini verir.
    // cos - sayýnýn kosinüs deðerini verir.
    
    printf("floor : %.2f \n", floor(5.12));
    printf("ceil : %.2f \n", ceil(5.12));
    printf("fobs : %.2f \n", fabs(-5.12));
    printf("pow : %.2f \n", pow(5, 4));
    printf("sqrt : %.2f \n", sqrt(5.12));
    printf("sin : %.2f \n", sin(5));
    printf("cos : %.2f \n", cos(5));
    
    system("PAUSE");	
    return 0;
}

