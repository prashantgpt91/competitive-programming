#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
#define mod 1000000007
long long int calc(int n)
{

	if(n<=1) return 2;	
	if(n%2==1)
{
unsigned long long int k=calc(n/2)%mod;
return ((k*k)%mod*2)%mod;
}
else
{
unsigned long long int k=calc(n/2)%mod;
return (k*k)%mod;
}
		
}
//long long int power(long long int,long long int);
int main()
{
long long int i,t,n;
cin>>t;
while(t--)
{
cin>>n;
long long int s=calc(n/2);
long long int s1;
if(n==1)
{
printf("2\n");
continue;
}
if(n%2==1)s1=4*(s-1)+2;
else s1=4*(s-1)-s+2;
s1=s1%mod;
printf("%lld \n",s1);
}
return 0;
}