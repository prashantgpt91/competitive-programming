#include<stdio.h>
#include<math.h>
main()
{
      int t,i;
      double A,s,a,b,c,d;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
           scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
           s=(a+b+c+d)/2;
           A=sqrt((s-a)*(s-b)*(s-c)*(s-d));
           printf("%0.2lf\n",A);
      }
      return 0;
}                 

