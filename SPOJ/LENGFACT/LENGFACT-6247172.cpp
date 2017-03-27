#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
int t;
long double n;
double pi=2.0*acos(0.0);
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n;
if(n==1||n==0)cout<<"1\n";
else
cout<<(long long int)floor((log(2*pi*n)/2+n*(log(n)-1))/log(10))+1<<endl;
}
return 0;
}
//floor((ln(2*pi*n)/2+n*(ln(n)-1))/ln(10))+1
