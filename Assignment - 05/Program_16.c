// Accept the string and display it in reverse order

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: Display
// Input        : String
// Output       : String
// Description  : This function accept the string and 
//                display it in reverse order
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void Display(char str[])
{
    int iCnt = 0;
    if(str == NULL)
    {return;}
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    str--;
    for(  ; iCnt > 0; iCnt--, str--)
    {
        printf("%c",*str);
    }
    printf("\n");
}
//------------------------------------------------------------
// Entry point function
//------------------------------------------------------------

int main()
{
    char Arr[10];
    int iRet = 0;
	
    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);
	
    Display(Arr);
    return 0;
}