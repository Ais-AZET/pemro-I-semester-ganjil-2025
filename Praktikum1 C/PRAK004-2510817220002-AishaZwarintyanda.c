#include <stdio.h>

    int a = 400000;
    int b = 350000;

int main()
{
    int diskonA = (a * 13) / 100; 
    int hargaA  = a - diskonA; 

    int diskonB = (b * 21) / 100; 
    int hargaB  = b - diskonB; 

    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n\n", b);

    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", hargaA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", hargaB);

    return 0;
}
