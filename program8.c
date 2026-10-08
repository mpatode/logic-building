/*
    Step 1: Understand the problem stamement.
    Step 2: Write the Algorithm.
    Step 3: Decide the programming language.
    Step 4: Write the program.
    Step 5: Test the program.

 */

/////////////////////////////////////////////////////////////////
//
//  Step 1:  Understand the problem statement
//              User is going to enter any 2 integers
//              And we have to perform addition.
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//  Step 2: Write the Algorithm.
/*
    START
        Accept the first number as No1
        Accept the second number as No1
        Create the varialbe as Ans to store the result
        Perform the addition and store it into Ans
        Display the reuslt from Ans

    END
*/
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//  Step 3: Decide the programming language.
//          We selext the C programming.
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//
//  Step 4: Write the program.
//
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name   :  Addition
//  Input           :  Integer, Integer
//  Output          :  Integer
//  Description     :  Perfomrs Addition
//  Date            :  04/10/2026
//  Author          :  Manoj Patode
//
/////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2; // Bussiness Logic

    return iAns;
}

/////////////////////////////////////////////////////////////////
//
//  Enrtry point of the Application.
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1, iValue2);

    printf("Addition is : %d\n", iResult);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Step 5: Test the prgogram.
//
//   Tested cases:
//------------------------------------------------
//   Input1      Input2      Output
//------------------------------------------------
//     10          11          21
//     11          0           11
//     0           11          11
//     20          -9          11
//    -20          11          9
//    -20         -11         -31
//
/////////////////////////////////////////////////////////////////
