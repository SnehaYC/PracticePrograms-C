// Write a program which accept number from user and check whether it contains 0 
// in it or not. 
// Input : 2395 
// Output : There is no Zero 
// Input : 1018 
// Output : It Contains Zero 
// Input : 9000 
// Output : It Contains Zero 
// Input : 10687 
// Output : It Contains Zero  


//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

#define TRUE 1 
#define FALSE 0 
typedef int BOOL;

//-----------------------------------------------------------
// Function Name :  ChkZero
// Input         :  Integer
// Output        :  Integer
// Description   :  This function accept number from user and
//                  check whether it contains 0 in it or not.
// Date          :	04/13/2022
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

 
BOOL ChkZero(int iNo) 
{ 
	int iCnt , iDigit = 0;
	
	while(iNo != 0)
	{	
		iDigit = iNo%10;
		if(iDigit == 0)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
		iNo = iNo/10;
	}
} 

//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------

int main() 
{ 
	int iValue = 0; 
	BOOL bRet = FALSE; 
	
	printf("Enter number: "); 
	scanf("%d",&iValue); 
	
	if(iValue == 0)
	{
		return -1;
	}
	bRet = ChkZero(iValue); 
	
	if(bRet == TRUE) 
	{ 
		printf("It Contains Zero"); 
	} 
	else 
	{ 
		printf("There is no Zero");
	} 
	
	return 0; 
} 
