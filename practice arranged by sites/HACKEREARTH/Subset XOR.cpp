#include <iostream>
using namespace std;
 
int main()
{
      int n,t,i;
   cin>>t;
   while(t--)
   {
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           cin>>a[i];
           if(n==1)
           cout<<a[0]<<endl;
           else
           cout<<0<<endl;
   }
   return 0;
}