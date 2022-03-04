#include <stdio.h>

int main()
{

    // menampilkan angka dari 1 sampai 10
    // dengan while loop
    // while (i <= 10)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // dengan do while
    // do
    // {
    //     printf("%d\n", i);
    //     i++;
    // } while (i <= n);

    // // dengan for loop
    // for (int i = 1; i <= n; i++)
    // {

    //     if (i % 2 == 0)
    //     {
    //         continue;
    //     }

    //     printf("%d\n", i);
    // }

    // // nested looping (looping bersarang)
    // // menampilkan angka dari 0 sampai 100
    // deklarasi variabel
    int i = 1;
    int n = 10;

    // dengan while

    // while (i < n)
    // {
    //     int j = 1;
    //     printf("Looping ke-%d\n", i);

    //     while (j < n)
    //     {
    //         printf("%d", j);
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }

    // dengan do while

    // dengan for loop
    printf("dengan for loop\n");
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}