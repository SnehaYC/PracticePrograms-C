// Accept number from user and display the addition of digits.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: SumDigitR
// Input        : Integer
// Output       : Integer
// Description  : Accept number from user and display the 
//                addition of digits.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int SumDigitR(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        SumDigitR(iNo);
    }
    return iSum;
}
//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    
    iRet = SumDigitR(iValue);
    printf("Addition of digits is : %d\n",iRet);
    
    return 0;
}

