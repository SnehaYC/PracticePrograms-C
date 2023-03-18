
//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: DisplayR
// Description  : Display * on screen using recursion function.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void DisplayR()
{
    static int i = 1;         
    if(i<= 4)           
    {
        printf("*\n"); 
        i++;                
        DisplayR();     
    }
}

//----------------------------------------------------------
// Entry point function
//-----------------------------------------------------------

int main()
{
    DisplayR();
    return 0;
}
