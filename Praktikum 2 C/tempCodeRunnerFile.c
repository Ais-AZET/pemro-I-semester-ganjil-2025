#include <stdio.h>
#include <string.h>

int main()
{
    char nama[50];
    char nim[20];
    int kelasP;
    char ttl[50];
    char alamat[100];
    char hobby[50];
    char nomor[20];

    printf("Nama                  : ");
    scanf(" %[^\n]s", nama);

    printf("NIM                   : ");
    scanf(" %[^\n]s", nim);

    printf("Kelas Paralel         : ");
    scanf("%d", &kelasP);

    printf("Tempat/Tanggal Lahir  : ");
    scanf(" %[^\n]s", ttl);

    printf("Alamat                : ");
    scanf(" %[^\n]s", alamat);

    printf("Hobby                 : ");
    scanf(" %[^\n]s", hobby);

    printf("No. HP                : ");
    scanf(" %[^\n]s", nomor);

    printf("\nNama                  : %s\n", nama);
    printf("NIM                   : %s\n", nim);
    printf("Kelas Paralel         : %d\n", kelasP);
    printf("TTL                   : %s\n", ttl);
    printf("Alamat                : %s\n", alamat);
    printf("Hobby                 : %s\n", hobby);
    printf("No. HP                : %s\n", nomor);

    return 0;
}