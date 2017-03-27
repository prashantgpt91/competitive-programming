#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
#define lol 101
#define x 10002

using namespace std;

bool mudgal[x]; 
int ans[10001]; 
 
 
void prime()
{
 int m,n,t;
mudgal[0]=mudgal[1]=1;
for(int i=2;i<lol;i++) 
{
if(mudgal[i]!=1)
 {
for(int j=2;i*j<x;j++)
mudgal[i*j] = 1;
}
}
}
      
int main()
{
int t,n,i,j,p,q,k,cnt;

prime();

for(j=1;j<=10000;j++)
{
cnt=0;
for(k=2;k<=j;k++)
 {
  q=(j-k)/2;
  if(mudgal[k]==0 && mudgal[q]==0 && ((j-k)%2==0))
    cnt++;
 }
 ans[j]=cnt;
}
 
cin>>t;
while(t--)
{
 cin>>n;
 printf("%d\n",ans[n]);
}
//system("pause");
}