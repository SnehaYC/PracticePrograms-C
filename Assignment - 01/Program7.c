// Program to print 5 to 1 numbers on screen.

//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//-----------------------------------------------------------
// Function Name : Display
// Input         : Integer
// Output        : Integer
// Description   : This function is used to accept number and 
//                 display 5 to 1 numbers on screen.
// Date          : 04/13/2022
// Author        : Sneha Yogesh Choudhari
//-----------------------------------------------------------
int Display()
{  
	int i; 
	for(i = 5;i >= 1;i--)
	{
		printf("%d",i);
	}
}

//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------
int main()
{
	Display();

	return 0;
} 