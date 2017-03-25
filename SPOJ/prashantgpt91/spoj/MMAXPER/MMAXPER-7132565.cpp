#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
  int n,k,t=0,t1=0,t2,p,q,i,j,p1,q1,h,temp,temp1;
  
  cin>>n;
   int a[n],b[n],c[n],c1[n],t4,m1,m2;
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  cin>>b[i];
  c[i]=0;
  c1[i]=0;
  }
  m1=a[0];
     m2=b[0];
  
   for(j=1;j<=n-1;j++)
   {
    
          
     p=fabs(b[j]-b[j-1])+a[j];
     q=fabs(b[j]-a[j-1])+a[j];
     p1=fabs(a[j]-b[j-1])+b[j];  
     q1=fabs(a[j]-a[j-1])+b[j];
     if(m1+p>=m2+q)
          temp=m1+p;
          else temp=m2+q;
     if(m1+p1>=m2+q1)
         temp1=m1+p1;
         else temp1=m2+q1;
     
     m1=temp;
     m2=temp1;
     
     
     
     
     
}
        
cout<<max(m1,m2)<<endl;
    
   
    
    
//system("PAUSE");
return 0;
}
     
                        
           


