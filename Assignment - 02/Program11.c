/*4. Accept two numbers from user and display first number in second number of times.
Input  : 12 5
Output : 12 12 12 12 12
Input  : -2 3
Output : -2 -2 -2
Input  : 21 -3
Output : 21 21 21
Input  : -2 0
Output : 
*/

//----------------------------------------------------------
// Header File
//----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------------------
// Function Name: Display
// Input        : Integer
// Output       : Integer
// Description  : This function Accept two numbers from user 
//                and display first number in second number of times. 
// Author       : Sneha Yogesh Choudhari
//----------------------------------------------------------
int Display( int iNo, int iFrequency)
{
	int iCnt;
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf(" %d ",iFrequency);
	}
} 

//----------------------------------------------------------
//Entry Point Function
//----------------------------------------------------------
int main()
{
 int iValue = 0;
 int iCount = 0;
 printf("Enter number");
 scanf("%d" ,&iValue);
 printf("Enter frequency: ");
 scanf("%d",&iCount);
 Display(iCount, iValue);
 return 0;
}