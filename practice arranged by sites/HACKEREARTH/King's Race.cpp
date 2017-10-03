#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
 
int a[1000000],b[1000000];//,tmp[1000000];
int n,k;
 
 
int main()
{
int t,i,j;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<k;i++)
scanf("%d",&b[i]);
int gg=1000006;
int maxindex=0;
int temp=0,temp2=0;
 
for(i=0;i<n;i++)
{
for(j=temp;j<k;j++)
{
  if(a[i]>=b[j])
  {
   temp++;
   maxindex=i;
  }
  else
  {
   temp=j;
   break;
  }
}
 
}
 
printf("%d\n",maxindex);
}
}