#include <stdio.h>

int main()
{
    int alas = 5;
    int tinggi = 12;
    int keliling = 30;
    int luas;
    int sisiA = alas; // ahay
    int sisiC;

    // rumus luas
    luas = (alas * tinggi) / 2;

    // rumus BC
    sisiC = keliling - sisiA;

    printf("Diketahui:\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);

    printf("Jawab:\n");
    printf("Sisi A = ? cm\n");
    printf("Sisi B = ? cm\n");
    printf("Sisi C = ? cm\n");
    printf("Keliling =  %d cm\n", keliling);
    printf("Luas =  %d cm\n", luas);

    return 0;
}