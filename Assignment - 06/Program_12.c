// Accept the number and one number(positions) and ON that positioned bit.
//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdbool.h>

//---------------------------------------------------------
// Function Name: OnBit
// Input        : Integer
// Output       : Integer
// Description  : This function accept the number and one  
//                number(positions) ON that positioned bit.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

unsigned int OnBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001;
    unsigned int iResult = 0;
    if((iPos < 1) || (iPos > 32))
    {   return false;}
    iMask = iMask << (iPos-1);
    iResult = iNo | iMask;
    return iResult;
}

//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    unsigned int iValue = 0,iPos = 0, iRet = 0;
    printf("Enter number: \n");
    scanf("%u",&iValue);
    printf("Enter position: \n");
    scanf("%d",&iPos);
    
    iRet = OnBit(iValue,iPos);
    
    printf("New number is : %u\n",iRet);
    return 0;
}