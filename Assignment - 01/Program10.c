//3. Accept number from user if number is less than 10 then print
//“Hello” otherwise print “Demo”.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: Display
// Input        : Integer
// Output       : Integer
// Description  : This function Accept number from user if numbers less than 
//                10 then print “Hello” otherwise print “Demo”. 
// Author       : Sneha Yogesh Choudhari
// Date         : 01/03/2021
//---------------------------------------------------------
void Display(int iNo)
{
	if(iNo < 10)
	{
		printf("Hello");
	}
	else
	{	
		printf("Demo");
	}
}

//---------------------------------------------------------
//Entry Point Function
//---------------------------------------------------------
int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d" ,&iValue);
	Display(iValue);
	return 0;
} 