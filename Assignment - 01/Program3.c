// Accept number from user and check whether number is even or odd.

//-----------------------------------------------------------
// Header File and Macros
//-----------------------------------------------------------
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//-----------------------------------------------------------
// Function Name: ChkEven
// Input        : Integer
// Output       : Integer
// Description  : This function Accept number from user 
//                and check whether number is even or odd.  
// Author       : Sneha Yogesh Choudhari
// Date         : 04/13/2022
//-----------------------------------------------------------
BOOL ChkEven(int iNo)
{
	if((iNo%2)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//-----------------------------------------------------------
//Entry Point Function
//-----------------------------------------------------------
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number");
	scanf("%d" ,&iValue);
	bRet = ChkEven(iValue);
	if(bRet == 0)
	{
		printf("Number is even ",bRet);
	}
	else
	{
		printf("Number is odd ",bRet);
	}
	return 0;
}