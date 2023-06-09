// Accept the number and display binary number of that number.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: DisplayBinary
// Input        : Integer
// Output       : Integer
// Description  : This function accept the number and display
//                binary number of that number.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void DisplayBinary(unsigned int iNo)
{
    unsigned int iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        printf("%u\t",iDigit);
        iNo = iNo / 2;
    }
}

//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    DisplayBinary(iValue);
    
    return 0;
}