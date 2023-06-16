/*5.Write a program which accept number from user and return difference between summation of all its factors and non factors. 
Input  : 12
Output : -34 (16 - 50)
Input  : 10
Output : -29 (8 - 37)
*/

//----------------------------------------------------------
// Header File and Macros
//----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------------------
// Function Name: FactDiff
// Input        : Integer
// Output       : Integer
// Description  : This function accept number from user and difference between
// 				  summation of all its factors and non factors.
// Author       : Sneha Yogesh Choudhari
//----------------------------------------------------------
int FactDiff(int iNo)
{
	int i,iSum=0;
	for(i=1; i <= iNo/2; ++i)
    {
      if(iNo % i == 0)
        {
           iSum = iSum + i;
        }
	}
	return iSum;
}	
int Factsum(int iNo)
{   
    int j,iSum1=0;
	for(j=1; j <= iNo; ++j)
    {
      if(iNo % j != 0)
        {
           iSum1 = iSum1 + j;
        }
	}
	return iSum1;
}

//----------------------------------------------------------
//Entry Point Function
//----------------------------------------------------------
int main()
{
 int iValue = 0;
 int iRet = 0;
 int iRet2 = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 iRet = FactDiff(iValue);
 iRet2 = Factsum(iValue);
 printf("%d",iRet-iRet2);
 return 0;
}