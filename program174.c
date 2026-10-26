#include <stdio.h>
#include <stdlib.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        
        iCount++;

        iNo = iNo / 10;
    }
    return iCount;
}

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        // -- Logic --
        iSum = iSum + iDigit;

        iNo = iNo / 10;
    }
    return iSum;
}

float AverageDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;
    fAns = (float)iTotal / (float)iFrequency;

    return fAns;
}

int main()
{
    int iValue = 0;
    float fAvg = 0.0f;
    int iSum = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    iCount = CountDigits(iValue);
    iSum = SumDigits(iValue);

    fAvg = AverageDigits(iSum, iCount);

    printf("Number of Digits : %d\n", iCount);
    printf("Summation of Digits : %d\n", iSum);
    printf("Average of digits : %.2f \n", fAvg);

    return EXIT_SUCCESS;
}
