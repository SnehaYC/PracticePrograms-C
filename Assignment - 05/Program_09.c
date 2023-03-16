// Accept the string and return frequency of small letters.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: CountSmall
// Input        : String
// Output       : Integer
// Description  : This function accept the string and 
//                return frequency of small letters.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int CountSmall(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        
		return 0; 
	}

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
    
    iRet = CountSmall(Arr);   
	
    printf("Frequency of small is: %d\n",iRet);
	
    return 0;
}