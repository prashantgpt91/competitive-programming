#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<stdlib.h> 
#include<cstdlib>
#include<cstring>
#include<math.h> 
#include<ctype.h>
#include<string.h>
#define M 10
using namespace std;
 unsigned long long int d[10];
/*unsigned long long int gcd(unsigned long long int a, unsigned long long int b)
{
    while(a!=b)
    {
       if(a>b)
         a=a-b;
        else
        b=b-a;
    }     
    return a;
}  
 */
  unsigned long long int expo( unsigned long long int base,  unsigned long long int exponent)
{
 unsigned long long int result = 1;
while(exponent>0)
{
if(exponent%2 == 1)
result=(result*base);

exponent=exponent>>1;
base=(base*base) ;
}
return result;
}

 unsigned long long int gcd(unsigned long long int u, unsigned long long int v)
{
  unsigned long long int shift;
 
  if (u == 0) return v;
  if (v == 0) return u;

  for (shift = 0; ((u | v) & 1) == 0; ++shift) {
         u >>= 1;
         v >>= 1;
  }
 
  while ((u & 1) == 0)
    u >>= 1;
 
  
  do {
      
       while ((v & 1) == 0) 
           v >>= 1;
 
       
       if (u > v) {
         unsigned long long int t = v; v = u; u = t;}  
       v = v - u;                     
     } while (v != 0);
 
 
  return u << shift;
}  
 void getDigitCount(unsigned long long int n){
 	unsigned long long int i,j;
 for(i=0;i<10;i++)
   d[i]=0;  
   unsigned long long int m=n,k=0,ones=0;  
   while(m){  
     ones=ones*10+1;  
     k++;  
     m=m/10;  
   } 
   unsigned long long int tens=ceil(expo(10,k-1));  
     
   
   while(tens){  
     unsigned long long int dig=(n/tens)%10;  
     unsigned long long int rest=n%tens;  
     k--;  
     for(i=0;i<10;i++){  
       d[i]=d[i]+((dig*(tens/10)*k));  
     }  
     for(i=0;i<dig;i++){  
       d[i]=d[i]+tens;  
     }  
     d[dig]+=(rest+1);  
     tens/=10;  
   }  
   d[0]=d[0]-ones;  
   
 }  
   
   
int main()
{
	unsigned long long int n,i,t,sum,prod,gg,gg1,gg2,tmp,cnt,den,num,x,y;
	
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		prod=10*n;  
     	n++;
vector <int> d;
tmp = n;
while (tmp > 0) {
d.push_back(tmp % 10);
tmp /= 10;
}
int kd = d.size();
 cnt = 0;
for (int dig = 0; dig <= 9; dig++) {
for (int j = kd - 1; j >= 0; j--) {
for (int v = 0; v < d[j]; v++) {
if (j == kd - 1 && v == 0) {
if (dig != 0) {
long long cur = 1;
for (int jj = 0; jj < j; jj++) cur *= 9;
cnt += cur;
} else {
long long cur = 1;
for (int jj = 0; jj < j; jj++) {
cur *= 9;
cnt += cur;
}
}
continue;
}
if (v == dig) continue;
long long cur = 1;
for (int jj = 0; jj < j; jj++) cur *= 9;
cnt += cur;
}
if (d[j] == dig) break;
}
}
cnt -= 9;
den = (n - 1) * 10;
 num = den - cnt;
 x = num, y = den;
 /*
     	gg=gcd(x,prod);
     	gg1=x/gg;
     	gg2=prod/gg;
     	*/
     	gg1=x;
     	gg2=prod;
while(x>0 && prod > 0)
if (x > prod) x %= prod;
else prod %= x;
gg1 /= x + prod;
gg2 /= x + prod;
     	printf("%llu/%llu\n",gg1,gg2);
     }
}