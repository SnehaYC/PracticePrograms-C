//Accept number from user and print numbers up to that number. 

//-----------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------
// Function Name : Display
// Input         : Integer
// Output        : Integer
// Description   : This funtion display the numbers.
// Date          : 04/13/2022
// Author        : Sneha Yogesh Choudhari
//----------------------------------------------

void Display(int iNo)
{
	int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
       
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);   
    }
}

//-----------------------------------------------------------
// Entry Point Function
//-----------------------------------------------------------
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);   

    return 0;
}