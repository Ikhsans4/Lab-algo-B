#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;
    int num;

    // fptr = fopen("file.txt", "r");
    fptr = fopen("file.txt", "a+");

    if (fptr == NULL)
    {
        printf("file tidak ditemukan");
        return 1;
    }
    // membaca isi file
    fscanf(fptr, "%d", &num);
    // fscanf(fptr, "%d", &num);
    // print ke terminal/console
    printf("Kalimat : %d", num);

    // input dari terminal
    printf("\nMasukkan angka :");
    scanf("%d", &num);

    fprintf(fptr, "%d, %d\n", num, 10);

    // fprintf(fptr,"%d",num);

    return 0;
}