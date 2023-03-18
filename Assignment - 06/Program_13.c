// Accept the number and one number(positions) and OFF that positioned bit.
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
//                number(positions) and OFF that positioned bit.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

unsigned int OffBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001;
    unsigned int iResult = 0;
    if((iPos < 1) || (iPos > 32))
    {   return 0;}
    
    iMask = iMask << (iPos-1);
    
    iMask = ~iMask;
    
    iResult = iNo & iMask;
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
    
    iRet = OffBit(iValue,iPos);
    
    printf("New number is : %u\n",iRet);
    return 0;
}