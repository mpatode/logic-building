/* 
    Input :     4
    Output :  -4     -3   -2   -1

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= 0; iCnt++) // O(N)  -- Reads as -> Order of N
    {
        printf("%d\t", iCnt);
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++) // O(N)  -- Reads as -> Order of N
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}
// Time Complexity = o(2N)

int main()
{
    int iValue = 0;

    printf("Enter the Value : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}