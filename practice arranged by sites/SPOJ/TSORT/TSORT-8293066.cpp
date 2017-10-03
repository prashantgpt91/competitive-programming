#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int  t,i;
scanf("%d",&t);
int a[t];
for(i=0;i<t;i++)
scanf("%d",&a[i]);
sort(a,a+t);
for(i=0;i<t;i++)
printf("%d\n",a[i]);
}

