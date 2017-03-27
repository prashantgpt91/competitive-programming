#include<iostream>
#include<math.h>

using namespace std;
int fact(int n);
int main()
{
   unsigned long long int n,r;
    cin>>n;
     r=fact(n)+pow(2,n)-n;
    printf("%lld",r);
//system("PAUSE");
return 0;
}

int fact(int n) 
{
  if(n==1)
  return 1;
 
  return n*fact(n-1);
}            
