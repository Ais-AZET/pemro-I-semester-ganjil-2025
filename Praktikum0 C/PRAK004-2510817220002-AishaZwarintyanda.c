#include <stdio.h>
#include <string.h>
// keduanya agar fungsi input-output dan rumus string bisa berjalan

int main()
{
    int width = 25;
    char nama[] = "Aisha Zwarintyanda";
    char nim[]  = "2510817220002";

    int jarak = width - 2; // ruang di dalam pagar

    // top #
    for (int jarak = 0; jarak < width; jarak++)
        printf("#");
    // isi=0 artinya isi dimulai dari 0, isi bisa diganti dgn huruf/kata lain
    // isi < width, pengulangan sampai jumlah width berakhir (di sini tertulis 20, jd sampai 20)
    //printf akan melakukan pengulangan pada # sesuai int
    printf("\n");
    //line break \n

    // empty
    printf("#%*s#\n", jarak, "");

    // nama
    int kiri = (jarak - strlen(nama)) / 2;
    int kanan = jarak - kiri - strlen(nama);
    //kiri & kanan adalah var bawaan, strlen bukan bawaan/bagian dr library
    printf("#%*s%s%*s#\n", kiri, "", nama, kanan, "");

    // nim
    kiri = (jarak - strlen(nim)) / 2;
    kanan = jarak - kiri - strlen(nim);
    //menghitung sisa ruang kosong setelah teks, lalu bagi dua
    //jarak = 23, strlen(nim) = 18
    //sisa = 23 - 18 = 5
    //kiri = 5 / 2 = 2
    printf("#%*s%s%*s#\n", kiri, "", nim, kanan, "");
    //#%*s%s%*s# berfungsi untuk mencetak nim ditengah ## dengan padding kanan & kiri, urutan: kiri, blank, nim, kanan, blank.

    // empty
    printf("#%*s#\n", jarak, "");

    // bottom #
    for (int jarak = 0; jarak < width; jarak++)
        printf("#");
    printf("\n");

    return 0;
}
