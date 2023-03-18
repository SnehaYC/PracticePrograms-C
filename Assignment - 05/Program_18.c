

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: DisplayASCII
// Input        : String
// Output       : String
// Description  : This function display the ASCII table.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void DisplayASCII()
{
    int i = 0;
    
    printf("--------------------------------------------------\n");
    printf("ASCII Table\n");
    printf("--------------------------------------------------\n");
    for(i = 0; i <= 128; i++)
    {
        printf("%c\t%d\t%o\t%x\n",i,i,i,i);
    }
    printf("--------------------------------------------------\n");
}
//------------------------------------------------------------
// Entry point function
//------------------------------------------------------------

int main()
{
    DisplayASCII();
    return 0;
}