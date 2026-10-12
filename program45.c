// Accept two numbers and print the Average.

#include <stdio.h>
#include <stdlib.h>

float Average(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    fAns = ((float)iNo1 + (float)iNo2) / 2; //Typecasting

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter first Number : \n");
    scanf("%d", &iValue1);

    printf("Enter second Number : \n");
    scanf("%d", &iValue2);


    fResult = Average(iValue1, iValue2);

    printf("Average is : %f", fResult);

    return EXIT_SUCCESS;
}