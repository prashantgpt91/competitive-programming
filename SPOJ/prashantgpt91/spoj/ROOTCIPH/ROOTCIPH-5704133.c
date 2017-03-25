#include<stdio.h>
main()
{
      int t,i;
      long long int a,b,c;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
       scanf("%lld%lld%lld",&a,&b,&c);
       printf("%lld\n",(a*a)-(2*b));
      }
       return 0;
}       

