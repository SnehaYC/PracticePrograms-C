
//---------------------------------------------------------
// Header File and Macros
//---------------------------------------------------------
#include<stdio.h>

//--------------------------------------------------------- 
// Author       : Sneha Yogesh Choudhari
//---------------------------------------------------------
int Addition(int no1, int no2)
{
    return no1 + no2;
}

int MyAdd(int x, int y)
{
    return Addition(x,y);
}

int MyAddX(int x, int y)
{
    int ans = 0;
    ans = Addition(x,y);
    return ans;
}

//---------------------------------------------------------
//Entry Point Function
//---------------------------------------------------------
int main()
{
    int iret = 0;
    iret = MyAdd(10,20);
    printf("%d",iret);
    return 0;
}