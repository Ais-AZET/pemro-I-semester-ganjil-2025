#include <stdio.h>

int a = 9;
int b = 5;
int y = 8;
int x = 8;

int main() {
    int hasilAb = a % b;  // sisa bagi
    int hasilXy = x % y;  
    int total = hasilAb + hasilXy;

    printf("Variabel a bernilai %d\nVariabel b bernilai %d\nVariabel x bernilai %d\nVariabel y bernilai %d\n\n", a, b, x, y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", total);
    return 0;
}
