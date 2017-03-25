#include<iostream>
#define Lim 1000000
using namespace std;

long long phi[1000010]  ;
long long ans[1000010];

void pre_cal();

int main()
{
     pre_cal(); 
     long long int p;    
     int n,t;
     scanf("%d",&t);
     for(int i=0;i<t;i++)
     {
      scanf("%d",&n);
     p=(1+ans[n])*n/2;
     printf("%lld\n",p);
     }
     //system("PAUSE");
}
    
     

void pre_cal()
{            
for(int i=1;i<=Lim;i++)
 phi[i]=i; 

//calculation of phi 
//http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=primeNumbers
for(int i=2;i<=Lim;i++)
{
if(phi[i]==i)
{
for(int j=2*i;j<=Lim;j+=i)
phi[j]-=phi[j]/i;
}
}
for(int i=2;i<=Lim;i++)
 if(phi[i]==i)
 phi[i]=i-1;      
  //pre_computation of phi values
  //where phi is function counts the number of positive integers less than or equal to n that are relatively prime to n.




//use the formula of oeis
//http://oeis.org/A051193
//FORMULA :a(n) = n*(1+Sum_{d|n} d*phi(d))/2;
//Where Sum_{d|n} d*phi(d) is Sum of d times phi(d) for all divisors d of n, where phi is Euler's phi function.
for(int i=1;i<=Lim;i++) 
for(int j=i;j<= Lim;j+=i) 
ans[j]+=i*phi[i];


}



 

