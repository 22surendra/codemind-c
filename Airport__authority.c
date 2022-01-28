#include<stdio.h>
int main ()
{
  int x[10],n,i, weight,amount=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&x[i]);
  scanf("%d",& weight);
  for(i=0;i<n;i++)
  {
  if(x[i]<=weight)
  {
      amount++;
  }
  else
    {
      amount+=2;
    }
  }
      printf("%d",amount);
      
      return 0;
  }