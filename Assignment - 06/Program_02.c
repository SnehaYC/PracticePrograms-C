// Accept the number and display ON bits.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: CountOne
// Input        : Integer
// Output       : Integer
// Description  : This function accept the number and
//                display ON bits.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

int CountOne(unsigned int iNo)
{
    unsigned int iDigit = 0;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCnt++;
        }
        iNo = iNo / 2;
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
    
    iRet = CountOne(iValue);
    
    printf("Number of on bits are : %d\n",iRet);
    return 0;
}