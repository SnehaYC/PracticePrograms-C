// Accept the number and toggle the bit and then display it on screen.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: ToggleBit
// Input        : Integer
// Output       : Integer
// Description  : This function accept the number and toggle 
//                the bit and then display it on screen.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

unsigned int ToggleBit(unsigned int iNo)   
{
    unsigned int iMask = 0X00000004;
    unsigned int Result = 0;
    
    Result = iNo ^ iMask;
    
    return Result;
}

//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = ToggleBit(iValue);
    
    printf("Number after updation : %d\n",iRet);
    return 0;
}