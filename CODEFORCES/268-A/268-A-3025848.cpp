#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,i,j,cont=0;
cin>>n;
int a[n][2];
for(i=0;i<n;i++)
for(j=0;j<2;j++)
cin>>a[i][j];
for(i=0;i<n;i++)
{
int x=a[i][0];
for(j=0;j<n;j++)
{
if(a[j][1]==x)
cont++;
}
}
cout<<cont<<endl;
//system("pause");
return 0;
}