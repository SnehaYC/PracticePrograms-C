// Accept number from user and display factors.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

//---------------------------------------------------------
// Function Name: DisplayFactorR
// Input        : Integer
// Output       : Integer
// Description  : Accept number from user and display the 
//                addition of digits.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int CountOneR(int iNo)
{
    static int iMask = 1;
    static int i = 0, iCnt = 0;
    
    if(i< 32)
    {
        if((iNo & iMask) == iMask)
        {
            iCnt++;
        }
        i++;
        iMask = iMask << 1;
        CountOneR(iNo);
    }
    return iCnt;
}

//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);
	
    iRet = CountOneR(iValue);
    
    printf("Number of 1's are : %d\n",iRet);
    return 0;
}
