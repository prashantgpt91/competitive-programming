#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    int t,i,j,n,ci,cli;
    cin>>t;
    while(t--)
    {
     ci=0;
     cli=0;
     cin>>n;
     int a[n];
     
     for(i=0;i<n;i++)
     cin>>a[i];
     
     //inversions
     for(i=0;i<n-1;i++)
     {
      for(j=i+1;j<n;j++)
      {
       if(a[i]>a[j])
       ci++;
      }
     }
     
     //local inversions
     for(i=0;i<n-1;i++)
     {
      if(a[i]>a[i+1])
       cli++;
     }
     if(ci==cli)
     printf("YES\n");
     else
     printf("NO\n");
   }     
    // system("PAUSE");
}