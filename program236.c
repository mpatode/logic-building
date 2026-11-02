#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[10] = "Ganesh";
    char *ptr = NULL;

    ptr = &(Arr[0]);

    printf("%c\n", *ptr);
    ptr++;

    printf("%c\n", *ptr);
    ptr++;

    printf("%c\n", *ptr);
    ptr++;

    printf("%c\n", *ptr);
    ptr++;

    

    printf("Entered string is : %s\n", Arr);
    
    return EXIT_SUCCESS;
}