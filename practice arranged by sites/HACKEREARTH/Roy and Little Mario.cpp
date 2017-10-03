#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#define mod 1000000007
using namespace std;
 
int main()
{
int t,n,i;
int a[100005];
a[1]=1;a[2]=2;a[3]=4;
 
for(i=4;i<=100000;i++)
a[i]=((a[i-1]+a[i-2])%mod+a[i-3])%mod;
 
cin>>t;
while(t--)
{
cin>>n;
printf("%d\n",a[n]);
}
}