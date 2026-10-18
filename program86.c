/*
    ----------------------------------------
                Operation || (Logical OR)   // | (BITWISE OR)
    ----------------------------------------
    Result1     Result2         Final Result
    ----------------------------------------
    TRUE        TRUE            TRUE       //Short Circuit Evaluation
    TRUE        FALSE           TRUE       //Short Circuit Evaluation
    FALSE       TRUE            TRUE
    FALSE       FALSE           FALSE

    ----------------------------------------
 */


#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("Number is Divisible by either 3 OR 5 \n");
    }
    else{
        printf("Not Divisible by 3 or 5 \n");
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