// Program to divide two numbers.

//------------------------------------------------------------------------
// Header file and Macros
//------------------------------------------------------------------------
#include<stdio.h>

//-------------------------------------------------------------------------
// Function Name : Divide
// Input         : Integer
// Output        : Integer
// Description   : This function is used to divide one number from another.
// Date          : 04/13/2022
// Author        : Sneha Yogesh Choudhari
//-------------------------------------------------------------------------
int Divide(int iNo1, int iNo2)
{
	int iAns = 0;
	if(iNo2 < 0)
	{
		return -1;
	}
	iAns = iNo1 / iNo2;
	return iAns;
}

//------------------------------------------------------------------
// Entry point function
//------------------------------------------------------------------
int main()
{
	int iValue1 = 15, iValue2 = 5;
	int iRet = 0;
 
	iRet = Divide(iValue1, iValue2);
	printf("Division is %d",iRet);
	return 0;
} 
