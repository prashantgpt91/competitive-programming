#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
#define mod 1000000007 

using namespace std;
long long int messi[1001],nonmessi[1001];
int main()
{
int n,t,k,i;

cin>>t;
while(t--)
{
for(i=0;i<=1000;i++)
{
messi[i]=0;
nonmessi[i]=0;
}
messi[0]=1;
nonmessi[0]=0;
 cin>>n>>k;
 for(i=1;i<=n;i++)
 {
  messi[i]=(nonmessi[i-1]*1)%mod+(messi[i-1]*0)%mod;
  nonmessi[i]=(nonmessi[i-1]*(k-1))%mod+(messi[i-1]*k)%mod;
 }
printf("%lld\n",messi[n]%mod);
}
//system("pause");
}