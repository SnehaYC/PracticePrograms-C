/*3.Write a program which accept number from user and display all its non factors.
Input  : 12
Output : 5 7 8 9 10 11
Input  : 13
Output : 2 3 4 5 6 7 8 9 10 11 12
Input  : 10
Output : 3 4 6 7 8 9
*/

//----------------------------------------------------------
// Header File and Macros
//----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------------------
// Function Name: NonFact
// Input        : Integer
// Output       : Integer
// Description  : This function accept number from user and 
// 				  display all its non factors..
// Author       : Sneha Yogesh Choudhari
//----------------------------------------------------------
void NonFact(int iNo)
{
	int i;
	for(i=1; i <= iNo; ++i)
    {
      if(iNo % i != 0)
        {
            printf("%d ",i);
        }
    }
}

//----------------------------------------------------------
//Entry Point Function
//----------------------------------------------------------
int main()
{
 int iValue = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 NonFact(iValue);
 return 0;
}