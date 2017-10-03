#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;

       
int main()
{
int t,n,k,i,j,s,p,x,xx,q,d,y;
cin>>t;
while(t--)
{s=0;p=0;y=0;
 cin>>n>>k;
 int a[n];
 for(i=0;i<n;i++){
 cin>>a[i];
 s=s+a[i];}
 
 sort(a,a+n);
 for(i=0;i<k;i++)
  p=p+a[i];
for(i=n-1,j=0;i>=0,j<k;i--,j++)
 y=y+a[i];
 d=(2*y)-s;
 q=s-(2*p);
 printf("%d\n",max(d,q));
 }
//system("pause");
}