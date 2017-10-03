#include<stdio.h>
int main()
{
      int n,p;
      while(1)
      {
      scanf("%d",&n);
      p=(n)*(n+1)*((2*n)+1)/6;
      if(n!=0)
      { 
      printf("%d\n",p);
      }
      else
      break;
      }
  return 0;
}           
