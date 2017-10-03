#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
  long long int t,i,j,k,n,m,s,c;
cin>>t;
while(t--)
{s=0;c=0;
cin>>n>>m;
long long int a[n];
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);


if(m<=s){
printf("1\n");}
else
{
for(i=n-1;i>=0;i--)
{
 s=s+a[i];
// printf("pehli %llu\n",s);
if(s>=m)
 {
c=1;
printf("%d\n",n-i);
break;
 }
}
}
if(s<m && c==0)
printf("-1\n");
}
}