#include <stdio.h>

int kali(int *a, int *b)
{
    int hasil = *a * *b;

    a = b; // kaji ulang
    b = a;
    return hasil;
}

int kali2(int *a, int *b)
{
    int hasil = *a * *b;
    int temp = *a;
    *a = *b; // kaji ulang
    *b = temp;
    return hasil;
}

int main()
{
    int a = 2, b = 3;
    int result = kali(&a, &b);
    printf("hasil = %d\n", result);
    printf("nilai b : %d\n", b);
    printf("nilai a : %d\n", a);

    int result2 = kali2(&a, &b);
    printf("setelah pakai pointer\n");
    printf("hasil = %d\n", result2);
    printf("nilai b : %d\n", b);
    printf("nilai a : %d\n", a);
    return 0;
}