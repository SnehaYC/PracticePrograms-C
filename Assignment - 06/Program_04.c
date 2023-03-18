// Accept the number and display ON bits.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: OffBit
// Input        : Integer
// Output       : Integer
// Description  : This function accept the number and
//                display ON bits.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

unsigned int OffBit(unsigned int iNo)
{
    unsigned int iMask = 0xFFFFFFFB;
    
    unsigned int Result = 0;
    Result = iNo & iMask;
    
    return Result;
}

//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number: \n");
    scanf("%u",&iValue);
    
    iRet = OffBit(iValue);
    
    printf("Number after updation : %d\n",iRet);
    return 0;
}