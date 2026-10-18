//Perfect no. code = The no. whose factors sum is equal to the no. (e.g. 28)

#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {

        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        printf("it is PERFCT number\n");
    }
    else
    {
        printf("it is NOT PERFCT number\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}

// Time complexity: O(N/2) 