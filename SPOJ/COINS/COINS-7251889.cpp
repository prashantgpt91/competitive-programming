#include<iostream>
#include<map>
#include<algorithm>
 
using namespace std;
 
map <long long,long long> h;
 
long long f(long long int n)  
{
  if(n==0) 
  return 0; //base
 
  long long r=h[n];
  //printf("%lld\n",r);
 
  if(r==0) 
  {
    r=max(n,(f(n/2)+f(n/3)+f(n/4)));
    h[n]=r;
  }
 
  return r;
}

int main()
{
       long long int n,p;
          
     while(scanf("%lld",&n)!=EOF)    
     {
        p=f(n);
       printf("%lld\n",p);
     }
    // system("PAUSE");                                
}


