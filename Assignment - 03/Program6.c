// Write a program which accept number from user and display its digits in reverse 
// order. 
// Input : 2395 
// Output : 5 
//          9 
//          3 
//			2 
// Input : 1018 
// Output : 8 
//			1 
//			0 
//			1 
// Input : -1018 
// Output : 8 
//			1 
//			0 
//			1 
// Input : 9000 
// Output : 0 
//			0 
//			0 
//			9 


//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//-----------------------------------------------------------
// Function Name :  DisplayDigit
// Input         :  Integer
// Output        :  Integer
// Description   :  This function accept number from user and 
//                  display its digits in reverse order. 
// Date          :	04/13/2022
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------

void DisplayDigit(int iNo) 
{ 
	int iDigit = 0; 
	 
	if(iNo<0) 
	{ 
		iNo = -iNo; 
	} 
	while(iNo != 0) 
	{ 
		iDigit = iNo%10; 
		printf("%d\t",iDigit); 
		iNo = iNo / 10; 
	} 
} 

//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------

int main()
{
	int iValue = 0;
	
	printf("Enter Number: ");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	
	return 0;
	
}

