#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
double a[35][100001];
int main()
{
   int t,n,k,i,j;
     for(i=0,j=0;j<100000;j++)
     a[i][j]=j;
     for(i=0,j=0;i<35;i++)
     a[i][j]=0;
      
     for(j=1;j<100000;j++)
     {
     for(i=1;i<35;i++)
     {
       a[i][j]=((a[i][j-1]*(j-1))+a[i-1][j-1])/j;
     }
    }
     
         scanf("%d",&t);
    while(t--)
    {
     scanf("%d%d",&n,&k);
     if(k>=35)
     printf("0\n");
     else
     printf("%0.7lf\n",a[k][n]);
    }
    //system("pause");
}