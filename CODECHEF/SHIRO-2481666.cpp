#include <stdio.h>
#include<iostream>
using namespace std;
int f[101];
float p[101];
float x;
void subsetsum(int fl[], int n, int sum,float pr[])
{
 	 float x=0.0;
    float subset[n+1][sum+1];
     subset[0][0]=1;
    for(int i=1;i<=sum;i++)
      subset[0][i]=0;  
     for(int i=1;i<=n;i++)
     {                               
       for(int j=0;j<=sum;j++)
       {                  
		  subset[i][j]=subset[i-1][j]*(1-pr[i-1]);
         if(j>=fl[i-1])
           subset[i][j]+=subset[i-1][j-fl[i-1]]*pr[i-1];
       }
     }  
                                   
  
    
       for(int j=(sum+1)/2;j<=sum;j++)
          x=x+subset[n][j];
        printf("%0.7f\n",x);

          
}
 
 

int main()
{
int n,t,i,j,k,sum;
cin>>t;
while(t--)
{
cin>>n;
sum=0;
for(i=0;i<n;i++)
{
cin>>f[i];
sum=sum+f[i];
}
 
for(i=0;i<n;i++)
{
cin>>p[i];
p[i]=p[i]/100;
}
subsetsum(f,n,sum,p); 
//printf("%0.6f\n",x);
}
//system("pause");
}