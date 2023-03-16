//Write a program which accept number from user and display its multiplication of factors. 
//Input : 12 
//Output : 144 (1 * 2 * 3 * 4 * 6) 
//Input : 13 
//Output : 1 (1) 
//Input : 10 
//Output : 10 (1 * 2 * 5) 


//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//-----------------------------------------------------------
// Function Name :  FactMult
// Input         :  Integer
// Output        :  Integer
// Description   :  This function program which accept number 
//                  from user and display its multiplication of factors.  
// Date          :	04/13/2022
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

int FactMult(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			iMult = iMult * iCnt;
		}
	}
	return iMult;
}

//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------

int main()
{
	int iValue, iRet = 0;
	
	printf("Enter Number: ");
	scanf("%d",&iValue);
	
	iRet = FactMult(iValue);
	
	printf("%d ",iRet);
	
	return 0;
	
}

