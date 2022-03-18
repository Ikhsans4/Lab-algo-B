#include <stdio.h>

int main()
{

    int num = 10;
    int *ptrNum = num;

    printf("bukan pointer %d\n", num);
    printf("ini pointer %d\n", ptrNum);

    return 0;
}