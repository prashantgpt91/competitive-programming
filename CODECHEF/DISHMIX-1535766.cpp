#include<iostream>
#include<cstdio>
using namespace std;
#define mod 1000000007
int main()
{
    int n,test,i,j,k,l;
    int a[100009];char v[100009];
    cin>>test;
    while(test--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%s",&v);
        l=n-1;
        int block[100009];
        j=0;
        block[0]=a[0];
        for(i=0;i<l;i++)
        {
            if(v[i]=='a')
            {
                block[j]=(block[j]+a[i+1])%mod;;
            }
            else
            {
                j++;
                block[j]=a[i+1];
            }
        }
        long long ans=1;
        for(i=0;i<=j;i++)
        {
            ans=(ans*block[i])%mod;
        }
        printf("%lld\n",ans);
    }
   
}