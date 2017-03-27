#include<stdio.h>

long long int a[100000];
int c;

void rec(long long int x)
{
     if(x%2==0 || x==1)
      return;
     else
      {
       a[c]=x;
       c++;
       rec((x+1)/2);
       rec((x-1)/2);
      }
}

int main()
{
long long int i,t,n,diff;
 scanf("%lld",&t);
 while(t--)
 {
  c=0;
  memset(a,0,sizeof(a));
  scanf("%lld",&n);
  rec(n);
  if(c==0)
  printf("0\n");
  else{
  diff=1;
  for(i=c-1;i>=0;i--)
   {
     if((diff*2)-a[i]<0)
      printf("2");
     else
      printf("1");
      
      diff=a[i];
   }  
printf("\n");}
}
  //getch();
}