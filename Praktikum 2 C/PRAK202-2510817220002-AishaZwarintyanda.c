#include <stdio.h>

int main() {
    float n1, n2;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &n1);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &n2);

    float total = n1 + n2;

    if (n1 == (int)n1) {
        printf("Hasil dari penjumlahan nilai pertama %d dan nilai kedua %.2f adalah %.2f\n", 
               (int)n1, n2, total);
    } else {
        printf("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.2f adalah %.2f\n", 
               n1, n2, total);
    }

    return 0;
}