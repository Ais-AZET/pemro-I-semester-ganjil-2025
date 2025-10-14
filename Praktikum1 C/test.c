#include <stdio.h>

int main()
{
    const int umur = 15;
    int umur =10;
    //const=jumlah yg tidak bisa diganti/ditimpa
    int tahunLahir = 2007;

    //satu.c: In function 'main':
    //satu.c:6:9: error: conflicting type qualifiers for 'umur'
    //int umur =10;
    //          ^~~~
    //satu.c:5:15: note: previous definition of 'umur' was here
    //const int umur = 15;
    //          ^~~~

    printf ("Umur saya %d pada tahun %d", umur, tahunLahir);
    return 0;
}