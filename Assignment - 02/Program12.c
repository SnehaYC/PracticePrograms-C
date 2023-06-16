//2. Write a program which accept number from user and print even factors of that number.
//Input  : 24
//Output : 1 2 4 6 8 12

//----------------------------------------------------------
// Header File
//----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------------------
// Function Name: Display
// Input        : Integer
// Output       : Integer
// Description  : This function accept two numbers from user 
//                and display first number in second number of times. 
// Author       : Sneha Yogesh Choudhari
//----------------------------------------------------------
void DisplayFactor(int iNo)
{
	int i = 0;
	int iCnt;
	if(iNo<=0)
	{
		iNo = -iNo;
	}
	for(iCnt=1; iCnt <= iNo/2; iCnt++)
	{
		if(((iNo%iCnt)==0) && ((iCnt%2)==0))
		{
			printf(" %d ",iCnt);
		}
	}
}

//----------------------------------------------------------
//Entry Point Function
//----------------------------------------------------------
int main()
{
	int iValue = 0;
	printf("Enter number :\n");
	scanf("%d",&iValue);
	DisplayFactor(iValue);
	return 0;
} 