#include <stdio.h>

int main()
{
    int nilai, hari, jam, menit, detik;
    scanf("input waktu: %d", &nilai);

    hari = nilai / 86400;
    jam = (nilai % 86400) / 3600;
    menit = (nilai % 3600) / 60;
    detik = nilai % 60;

    if (hari > 0){
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    }
    else{
        printf("%02d:%02d:%02d", hari, jam, menit, detik);
    }

    return 0;
}