#include <stdio.h>

int tambah(int a, int b)
{
    // int a = 3, b = 5;
    int hasil = a + b;
    return hasil;
}
int tambahptr(int *a, int *b)
{
    // *a = 3, *b = 5;
    int hasil = *a + *b;
    return hasil;
}

// void print(int a, int b, int hasil)
// {
//     printf("hasil penjumlahan %d + %d = %d\n", a, b, hasil);
// }
void printTambah(int a, int b)
{

    printf("hasil penjumlahan %d + %d = %d\n", a, b, tambah(a, b));
}

int main()
{
    int a = 5, b = 2;
    int c = tambah(a, b);
    // dengan pointer
    int cptr = tambahptr(&a, &b);
    // print(5, 2, c);
    // printTambah(a,b);

    printf("tanpa ptr %d\n", c);
    // print cptr
    printf("dgn ptr %d", cptr);

    return 0;
}