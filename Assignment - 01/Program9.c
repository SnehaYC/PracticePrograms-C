// Accept one number from user and print that number of * on screen.

//----------------------------------------------------------
// Header file and Macros
//----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------------------
// Function Name : Display
// Input         : Integer
// Output        : Display
// Description   : This function is used to accpt number and 
//                 display the content using for loop.
// Author        : Sneha Yogesh Choudhari
//----------------------------------------------------------
void Accept(int iNo)
{
	int iCnt ;
	for(iCnt = 0; iCnt<iNo; iCnt++)
	{
		printf("*\t");
	}
}

//----------------------------------------------------------
// Entry point function
//----------------------------------------------------------
int main()
{
 int iValue = 0;

 printf("Enter number");
 scanf("%d " ,&iValue);
 
 Accept(iValue);
 return 0;
}