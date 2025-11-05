#include <stdio.h>

int main() {
    int n;

    printf("Masukkan nilai: ");
    scanf("%d", &n);

    if (n < 0){
        printf("negatif");
    }
    else if (n > 0){
        printf("positif");
    }
    else if (n == 0){
        printf("nol");
    }
    else {
        printf("tidak valid");
    }

    return 0;
}