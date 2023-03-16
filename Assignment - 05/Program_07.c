// Accept the string and return count of A/a.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: CountA
// Input        : String
// Output       : Integer
// Description  : This function accept the string and 
//                display length of string.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int CountA(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        return 0; }
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A'))
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
    
    iRet = CountA(Arr); 
	
    printf("Frequency of A/a is: %d\n",iRet);
	
    return 0;
}