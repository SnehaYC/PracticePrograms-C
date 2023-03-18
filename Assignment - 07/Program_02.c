// Accept number from user and display the numbers upto that number in reverse.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: DisplayR
// Input        : Integer
// Output       : Integer
// Description  : Accept number from user and display the 
//                numbers upto that number in reverse.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void DisplayR(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\n",iNo);
        iNo--;
        DisplayR(iNo);
    }
}

//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    
    DisplayR(iValue);
    
    printf("End of main\n");
    return 0;
}

