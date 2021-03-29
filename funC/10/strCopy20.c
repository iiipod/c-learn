/* strCopy20.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char source[] = "iPhone";
    char dest[80] = "iMac and iPod";
    strcpy(dest, source);
    printf("source zifuchuan shi %s\n", source);
    printf("dest zifuchuan shi %s\n", dest);

    
    return 0;
}
