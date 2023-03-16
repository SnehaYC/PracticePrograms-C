// Accept N number from user and display that number.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//---------------------------------------------------------
// Function Name: Display
// Input        : Integer
// Output       : Integer
// Description  : This function Accept N number 
//                from user and display that number. 
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------
void Display(int Arr[], int iSize)                          
{
    int i = 0;
    printf("Elements from the array are : \n");
    for(i=0; i< iSize; i++)
    {
        printf("%d\n",Arr[i]);
    }
}

//---------------------------------------------------------
//Entry Point Function
//---------------------------------------------------------
int main()
{
    int *arr = NULL;                                             
    int iLenth = 0, i = 0;
    
    printf("Enter the number of elements\n");       
    scanf("%d",&iLenth);
    arr = (int*)malloc(iLenth * sizeof(int));           
    
    printf("Enter the elements\n");                       
    for(i = 0; i< iLenth; i++)
    {
        scanf("%d",&arr[i]);
    }
    Display(arr,iLenth);                
    free(arr);    
	
    return 0;
} 