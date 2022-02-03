#include<stdio.h>
#include<math.h>
int main()
{
   int a,num;
   float b;
   scanf("%d",&num);
   b=sqrt((double)num);
   a=b;
   if(a==b)
   printf("True");
   else
   printf("False");
}