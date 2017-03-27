#include<stdio.h>
#include<math.h>
main()
{     
      int t,i;
      long double v,s;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
      scanf("\n%Lf",&v);
      s=(sqrt(3)*pow(2,0.3333333333)*pow(v,0.6666666666))+(pow(4,0.6666666666)*sqrt(3)*pow(v,0.6666666666));
      printf("%Lf\n",s);
      }
      return 0;
}      
      

