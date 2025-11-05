#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai (0-100): ");
    scanf("%d", &nilai);

    char huruf;
    if (nilai >= 80) {
        huruf = 'A';
    }
    else if (nilai >= 70) {
        huruf = 'B';
    }
    else if (nilai >= 60) {
        huruf = 'C';
    }
    else if (nilai >= 50) {
        huruf = 'D';
    }
    else {
        huruf = 'E';
    }

    printf("Huruf: %c\n", huruf);

    return 0;
}