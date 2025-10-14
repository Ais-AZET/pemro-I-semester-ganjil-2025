#include <stdio.h>

int a = 4;
int b = 8;
int c = 3;

int main() {

    //perbandingan 1
    if (a == b) {
        printf("Apakah A sama dengan B? Jawabannya adalah 1\n");
    }
    else {
        printf("Apakah A sama dengan B? Jawabannya adalah 0\n");
    }

    //perbandingan 2
    if (b > c) {
        printf("Apakah B lebih kecil dari C? Jawabannya adalah 1\n");
    }
    else {
        printf("Apakah B lebih kecil dari C? Jawabannya adalah 0\n");
    }

    //perbandingan 3
    if (a != c) {
        printf("Apakah A tidak sama dengan C? Jawabannya adalah 1\n");
    }
    else {
        printf("Apakah A tidak sama dengan C? Jawabannya adalah 0\n");
    }
    //output
    return 0;
}
