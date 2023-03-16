// Accept the string and display length of string.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: strlenX
// Input        : String
// Output       : Integer
// Description  : This function accept the string and 
//                display length of string.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int strlenX(char str[])
{
    int iCnt = 0;
    
    while(*str != '\0')
    {
        iCnt++;
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
    printf("Enter your name: \n");
    scanf("%[^'\n']s",Arr);
  
    iRet = strlenX(Arr);   
    printf("String length is : %d\n",iRet);
	
    return 0;
}