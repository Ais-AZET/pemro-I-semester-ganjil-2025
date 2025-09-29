#include <stdio.h>

int main() {
    int a, z;
    int n = 7; // tinggi huruf
    int spasi = 3; // jarak antar huruf

    for (a = 0; a < n; a++) {
    //huruf a
    for (z = 0; z < n; z++)
    //z = 0 agar sesuai dengan jumlah int, jika kurang huruf akan terpotong
    //z<n adalah proses berhenti loop z pada huruf n(7)
    //huruf a mewakili baris dan z adalah kolum, keduanya akan digunakan di setiap huruf
        
        {
            if (a == 0)
            //membuat bagian atas huruf a
                printf("#");
            else if (a == n / 2)
                printf("#");
            else if (z == 0 || z == n - 1)
            //membuat kaki huruf a di kanan & kiri
                printf("#");
            else
                printf(" ");
        }

        // spasi antar huruf
        for (z = 0; z < spasi; z++) {
            printf(" ");
        }

        //huruf z
        for (z = 0; z < n; z++) {
            if (a == 0 || a == n - 1)
            //membuat kaki huruf z di kanan & kiri
            // jika nilai n - 1 diganti dgn angka lain, akan mempengaruhi letak garis bawah huruf z (misal - 7, garis bawah z akan berada dibawah garis atas)
                printf("#");
            else if (z == n - 1 - a)
                printf("#");
            else
                printf(" ");
            //fungsi if, if else, dan else disini untuk mengatur output mana yang diperlukan
        }
        printf("\n");
        //jika tdk ada break, maka hasil akan dioutputkan secara berjejer
    }

    return 0;
}
