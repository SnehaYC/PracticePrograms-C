//4. Accept one character from user and convert case of that character.
//Input : a Output : A
//Input : D Output : d

//----------------------------------------------------------
// Header File
//----------------------------------------------------------
#include<stdio.h>

//----------------------------------------------------------
// Function Name: DisplayConvert
// Input        : Character
// Output       : Character
// Description  : This function accept Accept one character from 
//				  user and convert case of that character.
// Author       : Sneha Yogesh Choudhari
// Date         : 04/13/2022
//----------------------------------------------------------
void DisplayConvert(char CValue) 
{ 
	if(CValue >= 'a' && CValue <= 'z')
	{
		CValue = CValue-32; 
		printf("%c",CValue); 
	}
	else if(CValue >= 'A' && CValue <= 'Z') 
	{ 
		CValue = CValue+32;
		printf("%c",CValue); 
	} 
} 

//----------------------------------------------------------
//Entry Point Function
//----------------------------------------------------------
int main() 
{ 
	char cValue = '\0'; 
	 
	printf("Enter character: \n"); 
	scanf("%c",&cValue);
	 
	DisplayConvert(cValue); 
	 
	return 0; 
} 

