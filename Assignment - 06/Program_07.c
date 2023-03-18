// Accept the number and check whether 5th bit is ON or OFF.

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
//                whether 5th bit is ON or OFF.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0x00000010;
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
        printf("5th bit is on\n");
    }
    else
    {
        printf("5th bit is off\n");
    }
    return 0;
}