#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)  //Nested if
    {

        if ((iNo % 5) == 0)
            printf("Number is Divisible\n");
        else
        {
            printf("Not divisible \n");
        }
    }
    else
    {
        printf("Not Divisible \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}