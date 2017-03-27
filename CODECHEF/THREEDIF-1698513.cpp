#include<iostream>
#include<map>
#include<string.h>
#include<algorithm>
#define mod 1000000007
using namespace std;

int main()
{
 unsigned long long int p,n1,n2,n3;
 int t;
 cin>>t;
 unsigned long long int a[3];
 while(t--)
 {
  cin>>a[0]>>a[1]>>a[2];
  sort(a,a+3);
  n1=a[0]%mod;
  n2=(a[1]-1)%mod;
  n3=(a[2]-2)%mod;
  p=(n1*n2)%mod;
  p=(p*n3)%mod;
  //p=(((a[0])*(a[1]-1)%mod)*((a[2]-2)))%mod;
 printf("%lld\n",p%mod);
 
 
} 
//system("PAUSE");
}