#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first Number : \n");
    scanf("%d", &iValue1);

    printf("Enter second Number : \n");
    scanf("%d", &iValue2);

    if(iValue1>iValue2)
    {
        printf("Maximum value is : %d\n", iValue1);
    }
    else
    {
        printf("Maximum value is : %d\n", iValue2);
    }

    return EXIT_SUCCESS;
}