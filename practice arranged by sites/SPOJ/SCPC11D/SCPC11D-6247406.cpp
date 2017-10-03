#include<iostream>

using namespace std;
int main()
{
 unsigned long long a,b,c,p,q,r,x,y,z;
    while(1)
    {
      scanf("%lld%lld%lld",&a,&b,&c);
        if(a==0 && b==0 && c==0)
         break;
      else
        {
        p=a*a;
        q=b*b;
        r=c*c;
        x=p+q;
        y=q+r;
        z=p+r;
        if(x==r || y==p || z==q)
                printf("right\n");   
        else
           printf("wrong\n");
        }
    }  
return 0;
}        
 

