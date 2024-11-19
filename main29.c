#include <stdio.h>

int main()
{
    // deðiþkenler
    // sayýsal d.
    // karakter tip d.
    // int, float, double
    
    int x = 5;
    float y = 15.22;
    double z = 889.35;
    
    char ch1 = 'a';
    char ch2 = '9';
    char ch3[] = "anan";
    
    printf("tam sayi : %d \n", x);
    printf("kesirli sayi : %f \n", y);
    printf("kesirli cift sayi : %lf \n", z);      
    
    printf("tek karakter : %c \n", ch1);
    printf("tek karakter : %c \n", ch2);
    printf("coklu karakter : %s \n", ch3);
  	
  	system("PAUSE");   
    return 0;
}
