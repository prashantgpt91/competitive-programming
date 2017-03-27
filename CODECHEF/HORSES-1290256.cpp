#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
long long int t,n,i,j,min,k;
cin>>t;

while(t--)
{
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];

sort(a,a+n);
min=a[1]-a[0];

for(j=1;j<n-1;j++)
{
k=a[j+1]-a[j];
if(k<min)
min=k;
}
printf("%lld\n",min);
}
return 0;
}