#include <stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter name:");
    fgets(name,sizeof(name),stdin);
    printf("Name:");
    puts(name);
    return 0;
}