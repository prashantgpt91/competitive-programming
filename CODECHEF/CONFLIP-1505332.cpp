#include<iostream>
using namespace std;

int main()
{
 long long int t,g,p,l,n,q;
scanf("%lld",&t);
 for(int i=0;i<t;i++)
 {
         scanf("%lld",&g);
         for(int j=0;j<g;j++)
         {
                 cin>>l>>n>>q;
              if(l==1)
              {
                 if(n%2==0)
                 p=n/2;
                 else if(n%2!=0 && q==1)
                 p=(n-1)/2;
                 else
                 p=(n+1)/2;
              }
              else
              {
                 if(n%2==0)
                 p=n/2;
                 else if(n%2!=0 && q==1)
                 p=(n+1)/2;
                 else
                 p=(n-1)/2;
              }
                
                 printf("%lld\n",p);
         }
         
         
 }
 //system("PAUSE");
}