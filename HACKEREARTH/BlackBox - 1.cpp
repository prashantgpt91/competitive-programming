#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int gcd2(long long int a,long long int b)
{
    while(a!=b)
    {
        if(a>b)
           a=a-b;
        else
           b=b-a;
	}
    return a;
    
}
long long int gcd(long long int a,long long int b)
{
    if(b==0)
     return a;
    else
       return gcd(b,a%b);
}
int main()
{
int t,n;
long long int a[3];
int i,j;
 
cin>>t;
while(t--)
{
scanf("%llu%llu%llu",&a[0],&a[1],&a[2]);
if((gcd(gcd(a[0],a[1]),a[2]))==1)
{
sort(a,a+3);
if(((a[0]*a[0])+(a[1]*a[1])==(a[2]*a[2])))
printf("YES\n");
else
printf("NO\n");
}
else
printf("NO\n");
}
}