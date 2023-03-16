// Write a program which accept number from user and return difference between 
// summation of all its factors and non factors. 
// Input : 12 
// Output : -34 (16 - 50) 
// Input : 10 
// Output : -29 (8 - 37)  

//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>
//-----------------------------------------------------------
// Function Name :  DiffFactNonFact
// Input         :  Integer
// Output        :  Integer
// Description   :  This funtion accept number from user and display its 
//                  factors in decreasing order. 
// Date          :	04/13/2022
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

int DiffFactNonFact(int iNo)
{
	int iCnt, iSum1, iSum2 = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1 ; iCnt <= iNo/2 ;iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			iSum1 = iSum1 + iCnt;
		}
	}	
	
	for(iCnt = 1; iCnt <= iNo ;iCnt++)
	{
		if((iNo%iCnt) != 0)
		{
			iSum2 = iSum2 + iCnt;
		}
	}
	return iSum1 - iSum2;	
}


//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------

int main()
{
	int iNo , iRet = 0;
	
	printf("Enter Number: ");
	scanf("%d",&iNo);
	
	iRet2 = DiffFactNonFact(iNo);
	printf("%d", iRet);
	
	return 0;
	
}
