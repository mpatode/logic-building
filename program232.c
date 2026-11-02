#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Ganesh Pune";

    printf("%s\n", Arr);

    printf("Size of Array is : %lu\n", sizeof(Arr));
    printf("Lenght of string is : %lu\n", strlen(Arr));

    return EXIT_SUCCESS;
}