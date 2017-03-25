#include<stdio.h>
#define PI 3.141592653589793

//using namespace std;

int main()
{
  int n,f,t,cnt,i,h;
  double totvol=0.0;
  scanf("%d",&t);
  while(t--)
  {
    int n,f;
    scanf("%d%d",&n,&f);
    f+=1;
    int a[n];
   double b[n];
    
    
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    b[i]=PI*a[i]*a[i];
    totvol+=b[i];
    }
   
  
   double hi=totvol,lo=0.0,mid;
     
   while(hi-lo>0.0000000001)
   {
     cnt=0;
     mid=(lo+hi)/2;                  
   
   for(h=0;h<n;h++)
    {     
         if(b[h]>mid)    
         cnt+=(b[h]/mid);  //in case one pie is able to serve many of the friends                            
     }
     if(cnt>=f)
     lo=mid;
     else
     hi=mid;
   }

   printf("%0.4f\n",mid);
   }
   //system("PAUSE");
}
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
              







