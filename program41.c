#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Maximum value is : %d\n", iNo1);
    }
    else
    {
        printf("Maximum value is : %d\n", iNo2);
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first Number : \n");
    scanf("%d", &iValue1);

    printf("Enter second Number : \n");
    scanf("%d", &iValue2);

    Maximum(iValue1, iValue2);

    return EXIT_SUCCESS;
}