#include<iostream>
#include<string.h>
#define mod 1000000007
using namespace std;
void multiply(unsigned long long int F[2][2], unsigned long long int M[2][2]);
 
void power(unsigned long long int F[2][2],unsigned long long int n);
 
/* function that returns nth Fibonacci number */
unsigned long long int fib(unsigned long long int n)
{
 unsigned long long  int F[2][2] = {{1,1},{1,0}};
  if(n == 0)
    return 0;
  power(F, n-1);
  return F[0][0]%mod;
}
 
/* Optimized version of power() in method 4 */
void power(unsigned long long int F[2][2],unsigned long long int n)
{
  if( n == 0 || n == 1)
      return;
 unsigned long long int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if( n%2 != 0 )
     multiply(F, M);
}
 
void multiply(unsigned long long int F[2][2],unsigned long long int M[2][2])
{
 unsigned long long int x =  (F[0][0]*M[0][0]%mod + F[0][1]*M[1][0]%mod)%mod;
 unsigned long long int y =  (F[0][0]*M[0][1]%mod + F[0][1]*M[1][1]%mod)%mod;
 unsigned long long int z =  (F[1][0]*M[0][0]%mod + F[1][1]*M[1][0]%mod)%mod;
 unsigned long long int w =  (F[1][0]*M[0][1]%mod + F[1][1]*M[1][1]%mod)%mod;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 
unsigned long long int bitcount(unsigned long long int n)
{
  unsigned long long int count=0;
    while(n>0){
        count = count + 1;
        n = n & (n-1);
        }
    return count;
}

int main()
{
unsigned long long int t,a,b,p,y;
 cin>>t;
 while(t--)
 {
  cin>>a>>b;
  p=fib(a+1);
  //printf("%lld\n",p);
  y=bitcount(p);
  
  if(y==b)
  printf("CORRECT\n");
  else
  printf("INCORRECT\n");
 }
 //system("pause");
}