#include <stdio.h>
#include <stdlib.h>

enum gunler{
     pazartesi, sali, carsamba, persembe, cuma    
};

//enum gunler{
//     pazartesi = 1, sali, carsamba, persembe, cuma    
//}; -> indexi 1 den baþlatýr

int main24()
{
    // Yeni deðiþken tipi oluþturma
    // enum - numaralandýrma
    
    enum gunler bugun = pazartesi;
    
    if(bugun==0)
         printf("Gunlerden pazartesi \n");
    
    
    
    system("PAUSE");	
    return 0;
}

