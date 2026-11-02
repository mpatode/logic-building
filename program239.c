#include<stdio.h>
#include<stdlib.h>


void Display(char str[])
{
    printf("%s\n", str);
}


int main()
{
    char Arr[] = "Ganesh";

    Display(Arr); //Call by Address

    return EXIT_SUCCESS;
}