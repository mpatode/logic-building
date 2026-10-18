//Perfect no. code = The no. whose factors sum is equal to the no. (e.g. 28)

#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {

        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);

    printf("Summation of fctors : %d\n", iRet);

    return EXIT_SUCCESS;
}

// Time complexity: O(N/2) 