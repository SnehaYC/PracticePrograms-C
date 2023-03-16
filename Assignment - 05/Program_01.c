// Accept the string and display it.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: main
// Input        : String
// Output       : String
// Description  : This function accept the string and display it.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------


#include<stdio.h>

int main()
{
    char Arr[40];
    
    printf("Enter your name: \n");
    scanf("%[^'\n']s",Arr);
     
    printf("Your name is : %s\n",Arr);
    
    return 0;
}