#include<stdio.h>

int main()
{
    int t,i;
    unsigned long long p,k;
    scanf("\n%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%llu",&k); 
        p=((k-1)*(250))+(192);
        printf("%llu\n",p);
    }
        return 0;
}
    




