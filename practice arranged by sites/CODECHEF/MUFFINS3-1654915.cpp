#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
   unsigned long long int t,n,i,j,get,max,getsize;
    cin>>t;
    while(t--)
    {
    cin>>n;
    if(n==1)
    getsize=1;
    else
    {
    getsize=(n/2)+1;
    }
    printf("%lld\n",getsize);
}

}