#include<stdio.h>

//using namespace std;

int main()
{
    int t,i;
    unsigned long long n;
     double p,x;
     x=(double)2/3; 
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       p=0;            
      scanf("%lld",&n);
     p=(double)((n-1)*(n+4))/(12*(n+1)*(n+2));
     printf("%0.11lf\n",p+x);
     }
        return 0;
}
      
                    
    
