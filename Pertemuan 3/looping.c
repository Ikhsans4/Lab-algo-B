#include <stdio.h>

int main()
{

    // deklarasi variabel
    int i = 1, j = 1;
    int n = 10;

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

    // dengan while

    while (i < n)
    {
        while (j < n)
        {
            printf("%d\n", i);
            j++;
        }
        i++;
    }

    // dengan do while

    // dengan for loop
    printf("dengan for loop\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}