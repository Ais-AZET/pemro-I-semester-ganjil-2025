#include <stdio.h>

int main() {
    int a,b,c,out;

    printf("Masukkan nilai: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b){
        out = a;
        a = b;
        b = out;
    }

    if (b > c){
        out = b;
        b = c;
        c = out;
    }

    if (a > b){
        out = a;
        a = b;
        b = out;
    }

    printf("%d %d %d", a, b, c);
    return 0;
}