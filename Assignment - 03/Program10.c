// Write a program which accept number from user and count frequency of such a 
// digits which are less than 6. 
// Input : 23966 
// Output : 2 
// Input : 1018 
// Output : 2 
// Input : 9440 
// Output : 2 
// Input : 922432 
// Output : 5   


//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//-----------------------------------------------------------
// Function Name :  Count
// Input         :  Integer
// Output        :  Integer
// Description   :  This function accept number from user and count 
//                  frequency of such a digits which are less than 6.
// Date          :	04/13/2022
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

int Count(int iNo) 
{ 
	int iFreq = 0, iDigit = 0;
		
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit < 6)
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
	
	iRet = Count(iValue); 
	
	printf("%d",iRet); 
	 
	return 0; 
}
