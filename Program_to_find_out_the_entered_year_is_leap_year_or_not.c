#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%400==0)
    {
        printf("True",x);
    }
    else if(x%100==0)
    {
        printf("False",x);
    }
    else if(x%4==0)
    {
        printf("True",x);
    }
    else
    printf("False",x);
}     
