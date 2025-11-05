#include <stdio.h>

int main()
{
    int n;
    char *kata;
    printf("Masukkan nilai: ");
    scanf("%d", &n);

    if (n == 0)
    {
        kata = "Nol";
    }
    else if (n >= 1 && n <= 9)
    {
        kata = "Satuan";
    }
    else if (n == 10 || (n >= 21 && n <= 99))
    {
        kata = "Puluhan";
    }
    else if (n >= 11 && n <= 19)
    {
        kata = "Belasan";
    }
    else
    {
        kata = "Anda Menginput Melebihi Limit Bilangan";
    }

    printf("%s\n", kata);

    return 0;
}