// Accept the number and check whether 3rd, 5th, 7th bit is ON or not.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdbool.h>

//---------------------------------------------------------
// Function Name: CheckBit
// Input        : Integer
// Output       : Integer
// Description  : This function accept the number and check
//                whether 3rd, 5th, 7th bit is ON or not.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0X00000054;  
    unsigned int iResult = 0;
	
    iResult = iNo & iMask;
	
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    unsigned int iValue = 0;
    bool bRet;
    
    printf("Enter number: \n");
    scanf("%u",&iValue);
    
    bRet = CheckBit(iValue);
    
    if(bRet == true)
    {
        printf("3,5,7 bits is on.\n");
    }
    else
    {
        printf("Bits are off.\n");
    }
    return 0;
}