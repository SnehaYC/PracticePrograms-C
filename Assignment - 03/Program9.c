// Write a program which accept number from user and count 
// frequency of 4 in it. 
// Input : 2395 
// Output : 0 
// Input : 1018 
// Output : 0 
// Input : 9440 
// Output : 2 
// Input : 922432 
// Output : 1   


//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//-----------------------------------------------------------
// Function Name :  CountFour
// Input         :  Integer
// Output        :  Integer
// Description   :  This function accept number from user and
//                  count frequency of 4 in it.
// Date          :	04/13/2022
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

int CountFour(int iNo) 
{ 
	int iFreq = 0, iDigit = 0;
		
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit == 4)
		{
			iFreq++;
		}
		iNo = iNo/10;
	}
	return iFreq;	
}
 
//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------

int main() 
{ 
	int iValue = 0; 
	int iRet = 0; 
	
	printf("Enter number: "); 
	scanf("%d",&iValue);
	
	iRet = CountFour(iValue); 
	
	printf("%d",iRet); 
	 
	return 0; 
}
