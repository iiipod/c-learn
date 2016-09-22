/* pointerArr1-5.c */
#include<stdio.h>

int main()
{
    int arr[] = {100, 101, 102};
    int *ptr = arr;
    int i, size = 0;
    size = (sizeof arr / sizeof(arr[0]));

    printf("shiyong arr zhizhen changliang lai biaoshi: \n");
    for(i=0;i<size;i++)
    {
        printf("&arr[%d] = %p\n",i, &arr[i]);
    }

    printf("\n");

    for(i=0;i<size;i++)
    {
        printf("arr+%d = %p\n", i, arr + i);
    }

    printf("\n");

    for(i=0;i<size;i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\n");

    for(i=0;i<size;i++)
    {
        printf("*(arr+%d) = %d\n", i, *(arr+i));
    }

    printf("\nshiyong ptr zhizhen bianliang lai biaoshi: \n");

    for(i=0;i<size;i++)
    {
        printf("ptr+%d = %p\n", i, ptr + i);
    }

    printf("\n");

    for(i=0;i<size;i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    printf("\n");

    for(i=0;i<size;i++)
    {
        printf("*(ptr+%d) = %d\n", i, *(ptr + i));
    }

    return 0;
}
