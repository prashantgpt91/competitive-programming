#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{ 
  long long int anger=0,t,m,n,s=0,k,h;
  scanf("%lld%lld",&m,&n);
 long long int a[n];
  for(int i=0;i<n;i++)
  {
  scanf("%lld",&a[i]);
  s+=a[i];
  }
  
  sort(a,a+n);   
  h=n;  
  for(int j=0;j<n;j++)
  {
   k=s-m;
   
   t=k/h;
   
   t=(t*h==k)?t:t+1;

   
   
   if(a[j]>=t)
   {
   anger=anger+(t*t);
   
   s-=a[j];
   a[j]-=t;
   m=m-(a[j]);
   }
   else
   {
     anger=anger+(a[j]*a[j]); s=s-a[j];
   }
 h--;
  }
printf("%lld\n",anger);
//system("PAUSE");  
} 
   
     
            










