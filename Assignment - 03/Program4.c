// Write a program which accept number from user and return summation of all its 
// non factors. 
// Input : 12 
// Output : 50 
// Input : 10 
// Output : 37 


//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//-----------------------------------------------------------
// Function Name :  SumNonFact
// Input         :  Integer
// Output        :  Integer
// Description   :  This funtion accept number from user and return 
//                  summation of all its non factors.
// Date          :	04/13/2022
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

int SumNonFact(int iNo)
{
	int iCnt, iSum = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo ;iCnt++)
	{
		if((iNo%iCnt) != 0)
		{
			iSum = iSum + iCnt;
		}
	}
return iSum;	
}

//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------

int main()
{
	int iNo , iRet = 0;
	
	printf("Enter Number: ");
	scanf("%d",&iNo);
	
	iRet = SumNonFact(iNo);
	
	printf("%d",iRet);
	
	return 0;
	
}
