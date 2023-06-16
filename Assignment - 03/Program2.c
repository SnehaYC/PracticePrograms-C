// Write a program which accept number from user and display its factors in 
// decreasing order. 
// Input : 12 
// Output : 6 4 3 2 1 
// Input : 13 
// Output : 1 
// Input : 10 
// Output : 5 2 1 


//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//-----------------------------------------------------------
// Function Name :  RevFact
// Input         :  Integer
// Output        :  Integer
// Description   :  This funtion accept number from user and display its 
//                  factors in decreasing order. 
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

void RevFact(int iNo)
{
	int iCnt, iFact = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = iNo/2; iCnt >= 1 ;iCnt--)
	{
		if((iNo%iCnt) == 0)
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
	
	RevFact(iNo);
	
	return 0;
	
}
