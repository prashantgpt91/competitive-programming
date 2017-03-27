#include<iostream>
 
 
using namespace std;
int M;
int a[25][100000],b[25][100000];
int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
 
/*unsigned long long int expo(unsigned long long int a,unsigned long long int b)
{
if(b==0)
return 1%M;
else if(b==1)
return a%M;
else if(b%2==0){
unsigned long long int k=expo(a,b/2)%M;
return (k*k)%M;
}
else
{
unsigned long long int k=expo(a,b/2)%M;
return ((k*k)%M*a)%M;
}
}
*/
long long int expo(long long int base, long long int exponent)
{
long long int result = 1;
while(exponent > 0)
{
if (exponent%2 == 1)
result = (result * base)%M;
exponent = exponent >> 1;
base = (base * base) % M;
}
return result;
}
 
int main()
{
int i,j,n,L,R,T;
scanf("%d",&n);
int x[n+1];
for(i=1;i<=n;i++)
scanf("%d",&x[i]);
scanf("%d",&T);
/*
for(i=0;i<25;i++){
for(j=0;j<=n;j++){
a[i][j]=0;
b[i][j]=0;
}
}*/

 
for(i=1;i<=n;i++)
{
for(j=0;j<25;j++)
{
while(x[i]%prime[j]==0)
{
x[i]=x[i]/prime[j];
a[j][i]++;
}
if(x[i]==1)
break;
}
}
 
 
 
for(i=0;i<25;i++)
{
for(j=1;j<=n;j++)
{
b[i][j]=b[i][j-1]+a[i][j];
}
}

while(T--)
{
 scanf("%d%d%d",&L,&R,&M);
/*
for(i=0;i<25;i++)
{
for(j=1;j<=n;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
 
//printf("%d %d\n",b[0][2],b[0][0]);
system("pause"); */
long long int ans=1;
for(i=0;i<25;i++)
{
long long int occur=b[i][R]-b[i][L-1];
 
ans=(ans*expo(prime[i],occur))%M;
}
printf("%lld\n",ans);
}
//system("pause");
}