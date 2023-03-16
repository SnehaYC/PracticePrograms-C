// Accept one number and check whether it is divisible by 5 or not.

//----------------------------------------------------------
// Header file and Macros
//----------------------------------------------------------
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//-----------------------------------------------------------------
// Function Name : Check
// Input         : Integer
// Output        : Integer
// Description   : This function is use to check whether the given
//                 input number is divisible by 5 or not.
// Date          : 04/13/2022
// Author        : Sneha Yogesh Choudhari
//-----------------------------------------------------------------
int Check(int iNo)
{
	if((iNo % 5) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE ;
	}
}

//------------------------------------------------------------------
// Entry point function
//------------------------------------------------------------------
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number");
	scanf("%d" ,&iValue);
	bRet = Check(iValue);
	
	if(bRet == TRUE)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Not Divisible by 5");
	}
 return 0;
}