// Accept number from user and display factors.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: DisplayFactorR
// Input        : Integer
// Output       : Integer
// Description  : Accept number from user and display the 
//                addition of digits.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void DisplayFactorR(int iNo)
{
    static int iCnt = 1;
    if(iCnt <= iNo/2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
        DisplayFactorR(iNo);
    }
}
//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    
    DisplayFactorR(iValue);
    
    return 0;
}
