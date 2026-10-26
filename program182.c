//PATTERN Printing

// $ $ $ $ $ 

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{

    int iCnt = 0;
    for(iCnt= 1; iCnt <= 5; iCnt++)
    {
        printf("$\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the frequecny : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
