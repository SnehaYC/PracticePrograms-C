// Accept N number from user and find the largest number.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------
// Function Name: Maximum
// Input        : Integer
// Output       : Integer
// Description  : This function Accept N number from user and
//                find the largest number. 
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------
int Maximum(int Arr[], int iLength)
{
    int i = 0, iMax = 0;
    if(Arr == NULL)
    {
        return -1;
    }
    iMax = Arr[0];
    for(i = 0; i < iLength ;i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}
//---------------------------------------------------------
//Entry Point Function
//---------------------------------------------------------
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0;
    
    printf("Enter number of elements: \n");
    scanf("%d",&iSize);
	
    arr = (int*)malloc(iSize*sizeof(int));
	
    printf("Enter the elements: \n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    iRet = Maximum(arr,iSize);
	
    printf("Largest number is: %d\n",iRet);
    
    free(arr);
	
    return 0;
}