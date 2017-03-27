#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>
using namespace std;

       
int main()
{
   int t,n,k,i,j;
   cin>>t;
   while(t--)
   {
    cin>>n>>k;
    int a[n],b[n],temp[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=0;i<n;i++)
    cin>>b[i];
    
    for(j=0;j<k;j++){
    for(i=0;i<n;i++){
    temp[b[i]-1]=a[i];
    }
    for(int g=0;g<n;g++)
     a[g]=temp[g];
     }
     for(i=0;i<n;i++)
     printf("%d ",a[i]);
     
     printf("\n");
     }
     //system("pause");
     }