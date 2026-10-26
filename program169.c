// Average of Numbers

#include <stdio.h>
#include <stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0;

    if(iNo < 0) //Updator for -ve to +ve
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }
    fAvg = iSum / iCount;   // Need of Typecasting here.
    return (fAvg);
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digits : %f\n", fRet);

    return EXIT_SUCCESS;
}
