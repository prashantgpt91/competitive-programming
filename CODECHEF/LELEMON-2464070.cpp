#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 int n,m,t,i,x,k,j,sum;
 cin>>t;
 while(t--)
 {
 sum=0;
  cin>>n>>m;    
  //order of visit
  int p[m],q[n-1];
  for(i=0;i<=n-1;i++)
  q[i]=0;
  for(i=0;i<m;i++)
  {
  cin>>p[i];
  q[p[i]]++;
  }
  for(i=0;i<n;i++)
  {
   cin>>x;
   int a[x];
   
   for(j=0;j<x;j++)
   a[j]=0;
   
   for(j=0;j<x;j++)
   cin>>a[j];
   sort(a,a+x);
   for(k=x-1;k>=0;k--)
   {
   if(q[i]>0)
   sum=sum+a[k];
   q[i]--;
   }
  }
  printf("%d\n",sum);
}
 //system("PAUSE");
}