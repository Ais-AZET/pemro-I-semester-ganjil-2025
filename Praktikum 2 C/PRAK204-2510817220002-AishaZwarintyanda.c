#include <stdio.h>
#include <string.h>

int main(){
    float jari;
    float tinggi;

    printf("Masukkan nilai jari-jari : ");
    scanf("%f", &jari);

    printf("Masukkan nilai tinggi : ");
    scanf("%f", &tinggi);

    float volume = (22.0 / 7.0) * (jari * jari) * tinggi;
    float luas = 2 * (22.0 / 7.0) * jari * (jari + tinggi);
    float keliling = 2 * (22.0 / 7.0) * jari;

    printf("Volume = %.2f\nLuas = %.2f\n Keliling = %.2f", volume, luas, keliling);
    return 0;
}