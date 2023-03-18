// Accept the number and one another number(position) and 
// check whether that positioned bit is ON or not.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdbool.h>

//---------------------------------------------------------
// Function Name: CheckBit
// Input        : Integer
// Output       : Integer
// Description  : This function accept the number and one another number(position) and 
//                check whether that positioned bit is ON or not.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

bool CheckBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001;
    unsigned int iResult = 0;
	
    if((iPos < 1) || (iPos > 32))
    {   return false;}

    iMask = iMask << (iPos -1);
    
    iResult = iNo & iMask;
	
    if(iResult == iMask)
    {   return true;    }
    else
    {   return false;   }
}
//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    unsigned int iValue = 0,iPos = 0;
    bool bRet;
    printf("Enter number: \n");
    scanf("%u",&iValue);
	
    printf("Enter position: \n");
    scanf("%d",&iPos);
	
    bRet = CheckBit(iValue,iPos);
	
    if(bRet == true)
    {   printf("Bit is on\n");}
    else
    {   printf("Bit is off\n"); }
    return 0;
}