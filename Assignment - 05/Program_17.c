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

void Reverse(char str[])
{
    char *start, *end;
    char temp;
    if(str == NULL)
    {return;}
    start = str;
    end = str;
    while(*end != '\0') 
    {
        end++;
    }
    end--; 
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
//------------------------------------------------------------
// Entry point function
//------------------------------------------------------------

int main()
{
    char Arr[10];
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
	
    Reverse(Arr);
    printf("Reverse string is : %s\n",Arr);
	
    return 0;
}