#include<iostream>
using namespace std;
#define mod 1000000003

int main()
{
int sub[1000006];
unsigned long long temp;
int j,test,n;
sub[0]=0;
for(n=1;n<1000001;n++)
{
temp=1;
temp=(temp*n*(n+1))/2;   //rem good
temp%=mod;temp*=temp;temp%=mod;temp+=sub[n-1];temp%=mod;sub[n]=temp;
}
scanf("%d",&test);
for(j=0;j<test;j++){scanf("%d",&n);printf("%d\n",sub[n]);}}

















