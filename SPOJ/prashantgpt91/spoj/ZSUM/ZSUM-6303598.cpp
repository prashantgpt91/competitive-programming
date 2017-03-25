#include<cstdio>
#include<iostream>
//#include<conio.h>
using namespace std;

int pow(int b, int e)
{
int result = (e & 1) ? b % 10000007 : 1;
while( e > 1 )
{
b = ((long long int)b * b) % 10000007;
e >>= 1;
//printf("%d\n",e);
if( e & 1 )
result = ((long long int)result * b) % 10000007;
}
return result;
}

int main()
{
int n,k;
while(1)
{
scanf("%d%d",&n,&k);
if(n==0 && k==0)
break;
int t1=pow(n-1,k);
int t2=pow(n,k);
int t3=pow(n-1,n-1);
int t4=pow(n,n);
t1=(2*t1)%10000007;
t3=(2*t3)%10000007;
//printf("%d\n%d\n%d\n%d\n",t1,t2,t3,t4);

int ans;
ans=(((t1+t2)%10000007+t3)%10000007+t4)%10000007;
printf("%d\n",ans);
}
//getch();
return 0;
}

 

