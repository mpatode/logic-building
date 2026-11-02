#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iCount = 0;

    char Arr[20] = "Jay Ganesh";
    char *ptr = NULL;

    ptr = &(Arr[0]);

    while(*ptr != '\0')
    {
        //Logic
        iCount++;
        ptr++;
    }

    printf("Lenght of String is : %d\n", iCount);

    return EXIT_SUCCESS;
}