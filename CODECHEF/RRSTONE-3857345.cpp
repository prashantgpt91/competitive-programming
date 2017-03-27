#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
int n,k,i,j;
cin>>n>>k;
long long int a[n],t[n];
long long int max1=0;
for(i=0;i<n;i++)
{
cin>>a[i];
t[i]=a[i];
if(max1<a[i])
max1=a[i];
}

long long int max2=0;
for(i=0;i<n;i++)
{
a[i]=max1-a[i];
if(max2<a[i])
max2=a[i];
}

if(k!=0)
{
if(k%2==0)
{
for(i=0;i<n;i++)
printf("%lld ",max2-a[i]);
}
else
{
for(i=0;i<n;i++)
printf("%lld ",a[i]);
}
}
else
for(i=0;i<n;i++)
printf("%lld ",t[i]);
}