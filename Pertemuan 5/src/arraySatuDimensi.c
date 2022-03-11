#include <stdio.h>

int main()
{
    // tanpa array
    int nilai1 = 1;
    int nilai2 = 2;
    // dengan array
    //                      0  1  2  3  4 index dari array
    // int arrayNilai[4] = {1, 2, 3, 4};
    int arrayNilai[10];

    // printf("%d", arrayNilai[2]);
    // input data manual dengan index
    // arrayNilai[2] = 5;
    //  input data dengan looping
    for (int i = 0; i < 10; i++)
    {

        arrayNilai[i] = i;
    }

    // for (int i = 0; i < 5; i++)
    // {
    printf("%d", arrayNilai[2]);
    // }

    return 0;
}
