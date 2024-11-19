#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Matematiksel fonksiyonlar.
    // floor - aşağıya yuvarla.
    // ceil - yukarıya yuvarla.
    // fabs - eksiyi artıya çevirir.
    // pow - üssünü alır.
    // sqrt - karesini alır.
    // sin - sayının sinüs değerini verir.
    // cos - sayının kosinüs değerini verir.
    
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

