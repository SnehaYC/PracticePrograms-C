// Accept N number from user and return the summation of even number.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------
// Function Name: SumEvenElements
// Input        : Integer
// Output       : Integer
// Description  : This function Accept N number 
//                from user and return the summation of even number. 
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------
int SumEvenElements(int Arr[], int iLength)
{
    int iSum = 0, i = 0;
    
    for(i = 0; i< iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iSum = iSum + Arr[i];
        }
    }
    return iSum;
}
//---------------------------------------------------------
//Entry Point Function
//---------------------------------------------------------
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0;
    
    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
    
    arr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements:\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet = SumEvenElements(arr,iSize);
    printf("Summation of all even elemets is : %d\n",iRet);
    free(arr);
    return 0;
} 