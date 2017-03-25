#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int t,j;
 long double a,b,c;
cin>>t;
long long p,q,r;
a=(long double)a;
b=(long double)b;
c=(long double)c;
for(j=0;j<t;j++)
{
cin>>a>>b>>c;
long double n,d,a1;
 
n=((7.0*a + 5.0*b + 2.0*c)/(2.0*(a+b)) + sqrtl(((7.0*a+5.0*b+2.0*c)*(7.0*a+5.0*b+2.0*c)/(2.0*(a+b)*2.0*(a+b))- (12.0*c)/(a+b))));
                
                
             
 p=llrintl(n);
 
d=(b-a)/(p-6);
q=llrintl(d);
a1=a-2*q;
 
 
r=llrintl(a1);
printf("%lld\n",p);
for(long long i=0;i<p-1;i++)
printf("%lld ",r+i*q);
 
printf("%lld",r+(p-1)*q);
 
printf("\n");
 
}
return 0;
//system("PAUSE");
}