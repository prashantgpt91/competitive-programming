#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,k,i,j,c,p,p1,s;
    cin>>t;
    while(t--)
    {c=0;
              cin>>n>>k;
              int a[n];
              for(i=0;i<n;i++)
              {
              cin>>a[i];
              c+=a[i];
              }
              sort(a,a+n);
              p=c%k;
              s=c/k;
              p1=s*k;
             // printf("%d\n%d\n",p1,c-a[0]);
              if(p1<=c-a[0])
              printf("-1\n");
             else
              printf("%d\n",c/k);
           //  else
            // printf("%d\n",); 
          }
         // system("PAUSE");
          return 0;
}