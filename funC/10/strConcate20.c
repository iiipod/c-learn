/* strConcate20.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char source[] = "iPhone and iTouch";
    char dest[80] = "Apple";
    strncat(dest, source, 6);
    printf("source zifuchuan shi %s\n", source);
    printf("dest zifuchuan shi %s\n", dest);

    system("pause");
    return 0;
}
