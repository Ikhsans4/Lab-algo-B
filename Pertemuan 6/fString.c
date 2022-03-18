#include <stdio.h>
#include <string.h>
int main()
{
    char kata1[] = "Whatsap ngelag";
    char kata2[20];
    printf("sebelum dicopy\n");
    printf("isi kata 1 : %s\n", kata1);
    printf("isi kata 2 : %s\n", kata2);
    strcpy(kata2, kata1);
    printf("setelah dicopy\n");
    printf("isi kata 1 : %s\n", kata1);
    printf("isi kata 2 : %s\n", kata2);

    return 0;
}