#include<iostream>
#include<algorithm>
using namespace std;

int max(int a, int b);
int knapSack(int W, int wt[], int val[], int n);
int main()
{
   int t,i,j,g,h,k,m,a,b,temp,s=0,P=0,d,p,c;
   cin>>t;
   for(i=0;i<t;i++)
   {         
     cin>>k>>m;
     int x[m],y[m];
   
     for(j=0;j<m;j++)
       cin>>x[j]>>y[j];   
      
  p=knapSack(k,x,y,m);
   printf("Hey stupid robber, you can get %d.\n",p);
   
                              
   }   
          return 0;
          // system("PAUSE");         
}          



int max(int a, int b)
 { return (a > b)? a : b; }



 // Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}    



