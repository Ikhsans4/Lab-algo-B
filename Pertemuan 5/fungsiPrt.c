#include <stdio.h>

int tambah(int a, int b)
{
    // int a = 3, b = 5;
    int hasil = a + b;
    return hasil;
}
void tambahptr(int array[])
{
    // *a = 3, *b = 5;
    // int hasil = *a + *b;
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;
    // return hasil;
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
    int array[] = {2, 3, 4};
    // dengan pointer
    // int cptr = tambahptr(array);
    printf("sebelum perubahan : %d", array[0]);
    tambahptr(array);

    // print(5, 2, c);
    // printTambah(a,b);

    printf("tanpa ptr %d\n", array[0]);
    // print cptr
    // printf("dgn ptr %d", cptr);

    return 0;
}