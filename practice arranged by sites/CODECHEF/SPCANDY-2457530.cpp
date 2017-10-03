#include<iostream>
using namespace std;

int main()
{
 long long int n,k,t;
 cin>>t;
 while(t--)
 {
  cin>>n>>k;    
  if(k==0)
  printf("0 %lld\n",n);
  else
  printf("%lld %lld\n",n/k,n%k);
 }
 //system("PAUSE");
}