#include<iostream>
using namespace std;
#define mod 1000000003

int sub[1000006];
int main()
{
unsigned long long temp,temp2;
int i,j,k,l,test,t,n,m;
sub[0]=0;
for(n=1;n<1000001;n++)
{
temp=1;
temp=(temp*n*(n+1))/2;
temp%=mod;
temp=(temp*temp)%mod;
//temp%=mod;

temp=(temp+sub[n-1])%mod;
//temp%=mod;
sub[n]=temp;
}

scanf("%d",&test);
test++;
while(--test)
{
scanf("%d",&n);

printf("%d\n",sub[n]);
}
//system("pause");


}











