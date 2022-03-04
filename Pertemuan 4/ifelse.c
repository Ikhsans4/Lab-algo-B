#include <stdio.h>

int main()
{

    int jumlah = 5;
    int n = 1;

    // printf("Masukkan jumlah : ");
    // scanf("%d", &jumlah);

    // if (jumlah == 5)
    // {
    //     printf("Cinta mati!");
    // }
    // else if (jumlah == 4)
    // {
    //     printf("cinta biasa");
    // }
    // else
    // {
    //     printf("baru jatuh cinta");
    // }

    switch (jumlah)
    {
    case 5:
        printf("Cinta mati!");
        break;
    case 4:
        printf("Cinta biasa!");
        break;
    default:
        printf("baru jatuh cinta");
    }

    return 0;
}