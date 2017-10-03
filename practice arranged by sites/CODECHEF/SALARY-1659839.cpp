#include<iostream>
using namespace std;

int main()
{
int t,n,i,j,ans,min;
scanf("%d",&t);
while(t--)
{
 scanf("%d",&n);
 int a[n];
 ans=0;
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 min=a[0];
 for(i=0;i<n;i++)
 {
 if(a[i]<min)
 min=a[i];
 }
 for(i=0;i<n;i++)
  ans=ans+a[i]-min;

printf("%d\n",ans);
}
}