#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,i,c;
    long double a;
    unsigned long long n,z,b,x,y;
    cin>>t;
    for(i=0;i<t;i++)
    {
      cin>>n;
      //scanf("%lld",&n);
      y=sqrt(n/2);
      c=0;
      for(b=sqrt(n);b>=y;b--)
      {
        z=n-(b*b);
        //printf("%lld\n",z);
        a=(int)sqrt(z);
        
        if(sqrt(z)==a)
        {
          c=1;                
          break;
        }
       }
          if(c==1)
    printf("Yes\n");
       else
      printf("No\n");
    }   
   // getch();
    return 0;
}







