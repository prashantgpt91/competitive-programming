#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,sum=0,a=0,b=0,i;
cin>>n;

if(n==1)
sum=1;
else
{
for(i=1;i<n-1;i++)
a=a+(n-i)*i+1;
//cout<<a<<endl;
sum=n+a+1;
}
cout<<sum<<endl;
//system("pause");
return 0;
}