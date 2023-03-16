// Accept the string and display character.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: Display
// Input        : String
// Output       : Charcters
// Description  : This function accept the string and display character.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------
void Display(char str[])
{
    int iCnt = 0;
    printf("Charcters from string are: \n");
    
    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }
}
//------------------------------------------------------------
// Entry point function
//------------------------------------------------------------

int main()
{
    char Arr[10];
    
    printf("Enter your name: \n");
    fgets(Arr,10,stdin);       
  
    Display(Arr);  
    
    return 0;
}