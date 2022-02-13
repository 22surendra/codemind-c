#include<stdio.h>
int main()
{
    int n,sum=0,r,sqr;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr!=0)
    {
        r=sqr%10;
        sum=sum+r;
        sqr=sqr/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}