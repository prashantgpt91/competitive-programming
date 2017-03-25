#include<iostream>
//#include<conio.h>
#include<algorithm>
using namespace std;

int main()
{ 
   long long int n,i,j,k,s;
   while(1)
   {s=0;
      cin>>n;
      if(n==0)
      break;  
     long long int a[n],b[n];
      for(i=0;i<n;i++)
      scanf("%lld",&a[i]);
      for(j=0;j<n;j++)
      scanf("%lld",&b[j]);
      
      sort(a,a+n);
      sort(b,b+n);
      
      for(k=0;k<n;k++)
        s=s+a[k]*b[n-k-1];  
        
        printf("%lld\n",s);
    }
   // system("PAUSE");               
    return 0;
}
         
         


