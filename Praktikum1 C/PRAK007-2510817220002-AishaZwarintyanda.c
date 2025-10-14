#include <stdio.h>

int main(){
    int s1 = 4, s2 = 5, s3 = 7;
    int keliling = 16;
    int meter = 85000;
    int total;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n");
    printf("Keliling Tanah Pak Dengklek adalah 16 \n");
    printf("Harga tanah Per Meter adalah 85000 \n");
    printf("Jawaban:\n");

    if (keliling == s1 + s2 + s3) {
        total = keliling * meter;
        printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d\n", total);
    }
    
    else {
        printf("Keliling tidak sesuai dengan jumlah sisi segitiga!\n");
    }

    return 0;
    }