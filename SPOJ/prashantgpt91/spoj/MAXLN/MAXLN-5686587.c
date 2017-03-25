#include<stdio.h>
int main()
{
    int t,i;
    long long int r;
    double p;
    scanf("%d",&t);
    for(i=1;i<t+1;i++)
    {
         scanf("%lld",&r);
         p=(4*r*r)+(0.25);
         printf("Case %d: %0.2lf\n",i,p);
    }
    return 0;
}               
