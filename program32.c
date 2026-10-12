#include <stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name : \n");
    scanf("%[^'\n']s", sName); //Enter(i.e. \n) remains in input buffer


    fflush(stdin);
    

    printf("Enter your Age : \n");
    scanf("%d", &iAge);

    printf("Enter your Marks : \n");
    scanf("%f", &fMarks);

    printf("Welcom %s\n", sName);
    printf("Welcom %d\n", iAge);
    printf("Welcom %f\n", fMarks);


    return EXIT_SUCCESS;
}