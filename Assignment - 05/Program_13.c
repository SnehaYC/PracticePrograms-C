// Accept the string and toggle the string.
// Input : ABcD@123
// Output : abCd@123
//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: strtoggleX
// Input        : String
// Output       : String
// Description  : This function accept the string and 
//                convert string into upper case.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void strtoggleX(char str[])
{
    if(str == NULL)
    {
		return;
	}
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
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
	
    strtoggleX(Arr);   
	
    printf("Updated string is: %s\n",Arr);
	
    return 0;
}