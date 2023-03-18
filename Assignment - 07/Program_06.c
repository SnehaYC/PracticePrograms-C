// Accept number from user and display factors.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//---------------------------------------------------------
// Function Name: DisplayFactorR
// Input        : Integer
// Output       : Integer
// Description  : Accept number from user and display the 
//                addition of digits.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

bool CheckPerfectR(int iNo)
{
    static int iSum = 0, iCnt = 1;
    if(iCnt<= iNo/2)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfectR(iNo);
    }
    if(iSum == iNo)
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
    int iValue = 0;
    bool bRet;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    bRet = CheckPerfectR(iValue);
    if(bRet == true)
    {
        printf("It is perfect number\n");
    }
    else
    {
        printf("It is not perfect number\n");
    }
    return 0;
}