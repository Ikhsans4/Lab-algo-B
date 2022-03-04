#include <stdio.h>

void main()
{
    int a = 10;
    // deklarasi array 2d
    int matriks[2][3] = {{1, 2, 3},
                         {6, 5, 9}};

    // printf("%d", matriks[1][2]);
    for (int i = 0; i < 2; i++)
    {
        // printf("%d", matriks[0][i]);
        for (int j = 0; j < 3; j++)
        {
            printf("%d", matriks[0][2]);
        }
        printf("\n");
    }
}