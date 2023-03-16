// Accept the string and convert string in lower case.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: strlwrX
// Input        : String
// Output       : String
// Description  : This function accept the string and 
//                convert string in lower case.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void strlwrX(char str[])
{
    if(str == NULL)
    {return;}
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
//------------------------------------------------------------
// Entry point function
//------------------------------------------------------------

int main()
{
    char Arr[10];
    int iRet = 0;
	
    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);
	
    strlwrX(Arr);
	
    printf("Updated string is: %s\n",Arr);
	
    return 0;
}