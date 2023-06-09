// Accept string and number from user and copy that number of string and display it.
// Input : Enter string : Sneha
// 		   Enter number : 2
// Output: Sn

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
//---------------------------------------------------------
// Function Name: strncpyX
// Input        : String
// Output       : String
// Description  : Accept string and number from user and copy 
//                that number of string and display it.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

void strncpyX(const char src[], char dest[], int value)
{
        if((src == NULL) || (dest == NULL) || (value <= 0))
        {
            return;
        }
        
        while((value>0) && (*src != '\0'))
        {
            *dest = *src;
            dest++;
            src++;
            value--;
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
    int iNo = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter number of elements to copy: \n");
    scanf(" %d",&iNo);
    
    strncpyX(arr,brr,iNo);
    
    printf("String after copy is : %s\n",brr);
    return 0;
}