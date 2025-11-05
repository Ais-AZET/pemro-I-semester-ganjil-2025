#include <stdio.h>
#include <string.h>

float main(){

    float a;
    float b;
    float i;
    float j;
    float x;
    float y;

    printf("Masukkan nilai a : ");
    scanf("%f", &a);

    printf("Masukkan nilai b : ");
    scanf("%f", &b);

    printf("Masukkan nilai i : ");
    scanf("%f", &i);

    printf("Masukkan nilai j : ");
    scanf("%f", &j);

    printf("Masukkan nilai x : ");
    scanf("%f", &x);

    printf("Masukkan nilai y : ");
    scanf("%f", &y);

    float total = (a - b) * (i / j) - (x + y);

    printf("%.3f", total);
    
    return 0;
}