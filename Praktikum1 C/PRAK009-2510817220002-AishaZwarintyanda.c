#include <stdio.h>

int main() {
    int pasukanYu = 958730;
    int pahlawanDA = 5;
    int pasukanPDA;

    // jumlah pasukan per-pahlawan
    pasukanPDA = pasukanYu / pahlawanDA;

    printf("Jumlah pasukan yang dibawa Yu Zhong = ?\n");
    printf("Jumlah pahlawan = ?\n");
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukanPDA);

    return 0;
}