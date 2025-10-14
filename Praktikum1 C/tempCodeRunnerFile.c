#include <stdio.h>

int main() {
    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;

    printf("Variable a bernilai %.0f\n", a);
    printf("Variable b bernilai %.0f\n", b);
    printf("Variable x bernilai %.0f\n", x);
    printf("Variable y bernilai %.0f\n", y);
    
    printf("Hasil dari (a + b) dikali x dibagi y adalah %.2f\n", (a + b) * x / y);
    return 0;
}