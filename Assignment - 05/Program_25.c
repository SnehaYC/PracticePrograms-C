// Accept string and one character from user and check whether 
//that character is present in that string or not.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
//---------------------------------------------------------
// Function Name: ChkChar
// Input        : String
// Output       : String
// Description  : Accept string and one character from user and check
//                whether that character is present in that string or not.
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------

BOOL ChkChar(char *str, char  ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        str++;
    }

    if (*str != '\0')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//------------------------------------------------------------
// Entry point function
//------------------------------------------------------------

int main()
{
    char arr[20];
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter String: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if (bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}