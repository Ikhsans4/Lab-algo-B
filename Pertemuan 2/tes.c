#include <stdio.h>

int main()
{
    char *nama[50];
    int npm;
    int tahunLahir;
    int tahunLahirSaya;
    int tahunSekarang;
    char jurusan[50];

    printf("Nama Saya Adalah : ");
    scanf("%[^\n]s", &nama);
    printf("NPM : ");
    scanf("%d", &npm);
    printf("Jurusan : ");
    scanf("%c", &jurusan);
    printf("Lahir Tahun : ");
    scanf("%d", &tahunLahir);
    printf("Tahun Lahir Saya : ");
    scanf("%d", &tahunLahirSaya);
    printf("Tahun Sekarang : ");
    scanf("%d", &tahunSekarang);
    printf("Umur Saya Sekarang Adalah = %d \n", (tahunSekarang - tahunLahirSaya));

    printf("===================================================\n");
    printf("Nama           : %s \n", nama);
    printf("Jurusan        : %s \n", jurusan);
    printf("NPM            : %d \n", npm);
    printf("Lahir Tahun    : %d \n", tahunLahir);
    printf("Usia           : %d \n", (tahunSekarang - tahunLahir));
    printf("===================================================\n");

    return 0;
}