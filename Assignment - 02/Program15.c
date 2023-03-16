//5. Accept on character from user and check whether that character is vowel(a,e,i,o,u) or not.
//Input : E Output : TRUE
//Input : d Output : FALSE

//----------------------------------------------------------
// Header File and Macros
//----------------------------------------------------------
#include<stdio.h>

# define true 1
# define false 0
typedef int BOOL ;

//----------------------------------------------------------
// Function Name: ChkVowel
// Input        : Character
// Output       : Character
// Description  : This function accept one character from user and 
//				  check whether that character is vowel(a,e,i,o,u) or not.
// Author       : Sneha Yogesh Choudhari
// Date         : 04/13/2022
//----------------------------------------------------------
BOOL ChkVowel ( char x )
{
	char lower_case = (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
	char upper_case = ((x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'));
		
	if(lower_case || upper_case)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//----------------------------------------------------------
//Entry Point Function
//----------------------------------------------------------
int main()
{ 

	char cValue = "\0"; 
	BOOL bRet = false;

	printf("Enter character\n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue );

	if (bRet == true)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("It is not Vowel");
	}
	return 0;
}