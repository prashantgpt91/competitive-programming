#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
int n,x1,x2,x3,y1,y2,y3,cnt=0,m,xx,p,a,b,c;
cin>>n;
while(n--)
{
cin>>x1>>y1>>x2>>y2>>x3>>y3;
a=((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1));
b=((y3-y1)*(y3-y1))+((x3-x1)*(x3-x1));
c=((y2-y3)*(y2-y3))+((x2-x3)*(x2-x3));
if(a==b+c || c==a+b || b==a+c)
cnt++;
}
printf("%d\n",cnt);
return 0;
}