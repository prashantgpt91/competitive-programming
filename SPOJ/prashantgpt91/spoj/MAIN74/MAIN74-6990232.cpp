#include<iostream>
#include<math.h>
using namespace std;



void multiply( unsigned long long F[2][2],  unsigned long long M[2][2]);

void power( unsigned long long F[2][2],unsigned long long n);


unsigned long long fib(unsigned long long  n)
{
   unsigned long long F[2][2] = {{1,1},{1,0}};
  if(n == 0)
    return 0;
  power(F, n-1);
  return F[0][0]%1000000007;
}

void power( unsigned long long F[2][2],unsigned long long n)
{
  if( n == 0 || n == 1)
      return;
   unsigned long long M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if( n%2 != 0 )
     multiply(F, M);
}

void multiply(  unsigned long long F[2][2],  unsigned long long M[2][2])
{
   unsigned long long x =  ((F[0][0]*M[0][0])%1000000007 + (F[0][1]*M[1][0])%1000000007)%1000000007;
   unsigned long long y =  ((F[0][0]*M[0][1])%1000000007 + (F[0][1]*M[1][1])%1000000007)%1000000007;
   unsigned long long z =  ((F[1][0]*M[0][0])%1000000007 + (F[1][1]*M[1][0])%1000000007)%1000000007;
   unsigned long long w =  ((F[1][0]*M[0][1])%1000000007 + (F[1][1]*M[1][1])%1000000007)%1000000007;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

int main()
{
  unsigned long long int t,n,i,p;
   cin>>t;
   for(i=0;i<t;i++)
   {
        cin>>n;           
      p=(fib(n+2)+fib(n+1))%1000000007;
      if(n==0)
      printf("0\n");
      else if(n==1)
      printf("2\n");
      else
      printf("%llu\n",p);
}
     // system("PAUSE");
      return 0;
}
                  
              
