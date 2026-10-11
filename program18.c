#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{

    if((iNo % 2) == 0)
    {
        printf("It is Even \n");
    }
    else
    {
        printf("It is Odd \n");
    }


}

int main()
{

    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;

}