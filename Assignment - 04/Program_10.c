// Accept N number from user and find the smallest number.

//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------
// Function Name: Minimum
// Input        : Integer
// Output       : Integer
// Description  : This function Accept N number from user and
//                find the smallest number. 
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------
int Minimum(int Arr[], int iLength)
{
    int i = 0, iMin = 0;
    if(Arr == NULL)
    {
        return -1;
    }
    iMin = Arr[0];
    for(i = 0; i < iLength ;i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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

    iRet = Minimum(arr,iSize);
    printf("Smallest number is: %d\n",iRet);
    
    free(arr);
    return 0;
}