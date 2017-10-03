#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
 int i,j,k,p,q,s;
 int a[5][5];
 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
  {
 cin>>a[i][j];
 if(a[i][j]==1)
 {p=i;q=j;}
 }
 }
 s=fabs(p-2)+fabs(q-2);
 printf("%d\n",s);
 
}