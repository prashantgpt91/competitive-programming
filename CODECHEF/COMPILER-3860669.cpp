#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
int t,i,j,x,y,h,p,zz;
cin>>t;
char a[1000002];
while(t--)
{
    zz=0;
    h=0;p=0;
    x=0;y=0;
cin>>a;
int l=strlen(a);

for(i=0;i<l;i++)
{
if(a[i]=='<')
x++;
else
y++;
if(y>x){
    zz=1;break;}
if(x==y){
    h=1;p+=x;x=0;y=0;
}
}
//int p=min(x,y);
if(h==1)
printf("%d\n",2*p);
else
    printf("0\n");
}
}