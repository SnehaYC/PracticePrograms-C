/*4.Write a program which accept number from user and return summation of all its non factors.
Input  : 12
Output : 50
Input  : 10
Output : 37
*/

//----------------------------------------------------------
// Header File and Macros
//----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------------------
// Function Name: SumNonFact
// Input        : Integer
// Output       : Integer
// Description  : This function accept number from user and 
// 				  return summation of all its non factors.
// Author       : Sneha Yogesh Choudhari
// Date         : 04/13/2022
//----------------------------------------------------------
int SumNonFact(int iNo)
{
	int i,iSum=0;
	for(i=1; i <= iNo; ++i)
    {
      if(iNo % i != 0)
        {
           iSum = iSum + i;
        }
	}
	return iSum;
}

//----------------------------------------------------------
//Entry Point Function
//----------------------------------------------------------
int main()
{
 int iValue = 0;
 int iRet = 0;
 
 printf("Enter number: ");
 scanf("%d",&iValue);
 
 iRet = SumNonFact(iValue);
 printf("%d",iRet);
 
 return 0;
} 

