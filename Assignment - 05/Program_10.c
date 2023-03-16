// Accept the string and return frequency of whitespace.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: CountSpace
// Input        : String
// Output       : Integer
// Description  : This function accept the string and 
//                return frequency of small letters.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int CountSpace(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        
		return 0; 
	}
   
    while(*str != '\0')
    {
        if(*str == ' ')
        {   
			iCnt++; 
		}
        str++;
    }
    return iCnt;
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
    
    iRet = CountSpace(Arr);  
    printf("Frequency of whitespace is: %d\n",iRet);
	
    return 0;
}