/* addressStruct.c */
#include<stdio.h>

int main()
{
    struct employee
    {
        char id[7];
        char name[20];
        int salary;
    };

    struct employee manager = {"D12345", "Peter", 35000};

    /* dayin jiegouti bianliang de neicun dizhi */
    printf("&manager= %p\n", &manager);
    printf("&manager.id= %p\n", manager.id);
    printf("&manager.name= %p\n", manager.name);
    printf("&manager.salary= %p\n", &manager.salary);

    /* dayin jiegouti bianliang de zhi */
    printf("manager.id= %s\n", manager.id);
    printf("manager.name= %s\n", manager.name);
    printf("manager.salary= %d\n", manager.salary);

    return 0;
}
