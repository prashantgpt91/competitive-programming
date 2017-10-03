#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  long long int n,i,j,c=1,s=0,b=0;
  scanf("%lld",&n);
  int a[n];
  
  for(i=0;i<n;i++)
  scanf("%lld",&a[i]);
  
  sort(a,a+n);
  
  for(j=n-1;j>=0;j--)
  {
   s=s+a[j]+1;                  
    if(s>=n)
    {
      printf("%lld\n",c);           
      b=1;
      break;           
    } 
    c++;
  }
  
  
  
//  system("PAUSE");
  return 0;
}
       
                          
