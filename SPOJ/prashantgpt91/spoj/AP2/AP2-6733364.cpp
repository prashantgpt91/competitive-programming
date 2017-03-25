#include<iostream>
//#include<conio.h>

using namespace std;

int main()
{
  long long int t,a,d,n,i,j,b,c,s;
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>b>>c>>s;      
    n=(s*2)/(b+c);
    d=(c-b)/(n-5);
    a=b-(2*d);
    printf("%lld\n",n);
    for(j=0;j<n;j++)
    printf("%lld ",(a+(j*d)));    
  }
  return 0;
  //getch();
}             
