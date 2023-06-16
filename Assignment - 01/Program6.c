//Program to print 5 times “Marvellous” on screen.

//---------------------------------------------------------------------------
// Header file and Macros
//---------------------------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------------------------
// Function Name : Display
// Input         : Integer
// Output        : Integer
// Description   : This function is use to print 5 times Marvellous on screen.
// Author        : Sneha Yogesh Choudhari
//----------------------------------------------------------------------------
void Display()
{
	int i = 0;
	for(i = 1; i<= 5;i++)
	{
		printf("Marvellous\n");
	}
}

//------------------------------------------------------------------
// Entry point function
//------------------------------------------------------------------
int main()
{
	Display();
	return 0;
}