#include <stdio.h>

int main() {
    int jarak = 14;
    int putaran = 5;
    float pi = 3.14;
    float jj;

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak);
    printf("Jawaban:\n");

    //rumus jari-jari
    jj = jarak / (putaran * 2 * pi);

    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jj);

    return 0;
}