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
    printf("Charcters from string are\n");
    
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
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