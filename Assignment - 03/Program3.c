// Write a program which accept number from user and display all its non factors. 
// Input : 12 
// Output : 5 7 8 9 10 11 
// Input : 13 
// Output : 2 3 4 5 6 7 8 9 10 11 12 
// Input : 10 
// Output : 3 4 6 7 8 9

//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//-----------------------------------------------------------
// Function Name :  NonFact
// Input         :  Integer
// Output        :  Integer
// Description   :  This funtion accept number from user and 
//                  display all its non factors.  
// Date          :	04/13/2022
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

void NonFact(int iNo)
{
	int iCnt, iFact = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo ;iCnt++)
	{
		if((iNo%iCnt) != 0)
		{
			printf("%d \t",iCnt);
		}
	}	
}

//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------

int main()
{
	int iNo = 0;
	
	printf("Enter Number: ");
	scanf("%d",&iNo);
	
	NonFact(iNo);
	
	return 0;
	
}
