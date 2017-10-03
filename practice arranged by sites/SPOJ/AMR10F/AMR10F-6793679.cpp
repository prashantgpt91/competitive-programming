#include<iostream>
#include<string.h>

using namespace std;

int main()
{
 int t,n,a,d,i,p;
 cin>>t;
   for(i=0;i<t;i++)
   {
     cin>>n>>a>>d;
     p=(n)*((2*a)+((n-1)*d));
     printf("%d\n",p/2);              
 }
 return 0;
// system("PAUSE");
}
