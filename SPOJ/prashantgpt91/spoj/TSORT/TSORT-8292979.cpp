#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int  t,i;
cin>>t;
int a[t];
for(i=0;i<t;i++)
cin>>a[i];
sort(a,a+t);
for(i=0;i<t;i++)
printf("%d\n",a[i]);
}
