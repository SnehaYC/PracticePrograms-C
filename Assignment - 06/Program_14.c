// Accept the number and and check ON bits.
//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdbool.h>

//---------------------------------------------------------
// Function Name: CountBit
// Input        : Integer
// Output       : Integer
// Description  : This function accept the number and one 
//                number(positions) and OFF that positioned bit.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int CountBit(unsigned int iNo)
{
    unsigned int iMask = 0X00000001, iResult = 0;     
    int iCnt = 0, i = 0;
    for(i = 0; i < 32; i++)
    {
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            iCnt++;
        }
        iMask = iMask << 1;
    }
    return iCnt;
}


//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
	
    printf("Enter number: \n");
    scanf("%u",&iValue);
    
    iRet = CountBit(iValue);
    printf("Total ON bits are : %d\n",iRet);
	
    return 0;
}