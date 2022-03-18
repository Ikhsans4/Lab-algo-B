#include <stdio.h>

int tambah(int a, int b)
{
    int hasil = a + b;
    return hasil;
}

void print(int a, int b, int hasil)
{
    printf("hasil penjumlahan %d + %d = %d\n", a, b, hasil);
}
void printTambah(int a, int b)
{

    printf("hasil penjumlahan %d + %d = %d\n", a, b, tambah(a, b));
}

int main()
{
    int a = 10, b = 5;
    int c = tambah(a, b);
    printf("hasil penjumlahan = %d\n", c);
    print(5, 2, c);
    printTambah(5, 2);

    // printf("%d", c);

    return 0;
}