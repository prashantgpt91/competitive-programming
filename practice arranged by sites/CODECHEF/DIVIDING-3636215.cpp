#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int t,i,j,n,s,ss=0;
    cin>>n;
        s=(n*(n+1))/2;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        ss+=a[i];}
    float chk=ss/s;
    if(chk*s==ss)
        printf("YES\n");
    else
        printf("NO\n");
}