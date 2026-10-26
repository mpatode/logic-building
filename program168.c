// Average of Numbers

#include <stdio.h>
#include <stdlib.h>

int AverageDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
        /// Check Logic
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;

        iNo = iNo / 10;
    }
    
    return iSum;
    
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Noumbers of digits : %f\n", fRet);

    return EXIT_SUCCESS;
}
