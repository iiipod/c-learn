/* strCopy30.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char source[] = "iPhone, iMac, and iTouch";
    char dest[80] = "iMac";
    strncpy(dest, source, 12);
    printf("source zifuchuan shi %s\n", source);
    printf("dest zifuchuan shi %s\n", dest);

    
    return 0;
}
