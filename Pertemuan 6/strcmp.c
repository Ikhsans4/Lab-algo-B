#include <stdio.h>
#include <string.h>
int main()
{
    char kata1[] = "MIPA";
    char kata2[] = "MIPA";
    if ((strcmp(kata1, kata2)) == 1)
    {
        printf("format kata sama");
    }
    else
    {
        printf("format kata berbeda");
    }
    return 0;
}