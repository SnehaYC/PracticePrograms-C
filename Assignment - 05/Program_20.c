// Accept the string and display it in reverse order

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: strcpyrevX
// Input        : String
// Output       : String
// Description  : This function accept the string and 
//                display it in reverse order
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void strcpyrevX(char src[], char dest[])
{
    int iCnt = 0;
    if(src == NULL || dest == NULL)
    {
        return;
    }                                           
    
    while(*src != '\0')                 
    {
        src++;
        iCnt++;                           
    }
    src--;
    while(iCnt > 0)
    {
        *dest = *src;
        src--;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
//------------------------------------------------------------
// Entry point function
//------------------------------------------------------------

int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyrevX(arr,brr);   
        
    printf("After copy strinng is : %s\n",brr);
    
    return 0;
}