#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main8()
{
    // Matematiksel fonksiyonlar.
    // floor - a�a��ya yuvarla.
    // ceil - yukar�ya yuvarla.
    // fabs - eksiyi art�ya �evirir.
    // pow - �ss�n� al�r.
    // sqrt - karesini al�r.
    // sin - say�n�n sin�s de�erini verir.
    // cos - say�n�n kosin�s de�erini verir.
    
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

