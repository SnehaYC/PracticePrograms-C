// Accept N number from user and display even number.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------
// Function Name: Display
// Input        : Integer
// Output       : Integer
// Description  : This function Accept N number 
//                from user and display even number. 
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------
void DisplayEven(int Arr[], int iLength)
{
    int i = 0;
    if((Arr == NULL) || (iLength <=0))
    {return;}
    printf("Even elements are\n");
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

//---------------------------------------------------------
//Entry Point Function
//---------------------------------------------------------
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0;
    printf("Enter the number of elements: \n");
    scanf("%d",&iSize);
    arr = (int *)malloc(iSize * sizeof(int));
    if(arr == NULL)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }
    printf("Enter the elements: \n");
    for(i = 0;i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    DisplayEven(arr,iSize); 
    free(arr);
    return 0;
} 