// Accept two the string and display concatenated string.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: strcatX
// Input        : String
// Output       : String
// Description  : This function accept the string and 
//                display concatenated string.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void strcatX(const char src[], char dest[])
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src!= '\0')
    {
        *dest = *src;
        src++;
        dest++;
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
    
    printf("Enter first string: \n");
    scanf("%[^'\n']s",arr);   
    printf("Enter second string: \n");    
    scanf(" %[^'\n']s",brr);
    strcatX(arr,brr);
    printf("After concat strinng is : %s\n",brr); 
    
    return 0;
}