/*2.Write a program which accept number from user and display its factors in decreasing order.
Input  : 12
Output : 6 4 3 2 1
Input  : 13
Output : 1
Input  : 10
Output : 5 2 1
*/

//----------------------------------------------------------
// Header File and Macros
//----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------------------
// Function Name: FactRev
// Input        : Integer
// Output       : Integer
// Description  : This function accept number from user and display
//                its factors in decreasing order.
// Author       : Sneha Yogesh Choudhari
//----------------------------------------------------------
void FactRev(int iNo)
{     
    int i,n,revNumber=0;
	for(i=1; i<= iNo/2; ++i)
    {
      if(iNo%i == 0)
        { 
		   printf(" %d ",i);
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
 FactRev(iValue);
 return 0;
}