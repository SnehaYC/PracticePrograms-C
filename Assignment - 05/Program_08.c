// Accept the string and return frequency of capitals.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: CountCap
// Input        : String
// Output       : Integer
// Description  : This function accept the string and 
//                return frequency of capitals.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int CountCap(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        
		return 0; 
	}
	
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
    
    iRet = CountCap(Arr);   
	
    printf("Frequency of capitals is: %d\n",iRet);
	
    return 0;
}