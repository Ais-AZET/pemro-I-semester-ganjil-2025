#include <stdio.h>
#include <math.h>

void hasil(double A, double B)
{
    double c; //sisi terbesar
    double t; //tinggi
    double k; //alas
    double keliling, luas;

    c = fmax(A, B);
    t = fmin(A, B);
    k = sqrt(c * c - t * t);

    double Alas = round(k);
    double Tinggi = round(t);

    keliling = Alas + Tinggi + c;

    luas = 0.5 * Alas * Tinggi;

    printf("\noutput\n");

    printf("Alas = %.0f cm\n", Alas);
    printf("Tinggi = %.0f cm\n", Tinggi);
    printf("Keliling = %.0f cm\n", round(keliling)); // Membulatkan keliling
    printf("Luas = %.0f cm^2\n", round(luas));       // Membulatkan luas
}
int main()
{
    double A, B;

    printf("Masukkan Nilai A : ");
    scanf("%lf", &A);

    printf("Masukkan Nilai B : ");
    scanf("%lf", &B);

    printf("\nInput\n");
    printf("%.0f %.0f\n", A, B);

    hasil(A, B);

    return 0;
}