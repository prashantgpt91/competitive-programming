#include<stdio.h>

int main(void)
{     int i,j,k;
      j=0;
      i=-1;
      int a[100];
      
      do
      {     i++;
                          scanf("%d",&a[i]);
      
      
      }while(a[i]!=42);
      scanf("%d",&k);
      
      while(j<i)
      {
      printf("\n%d",a[j]);
      j++;
      }
      
      
      return 0;
}