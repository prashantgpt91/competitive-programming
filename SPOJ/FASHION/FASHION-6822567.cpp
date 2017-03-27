#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int t,n,i,j,s=0,h,k;
  cin>>t;
  for(i=0;i<t;i++)
  {s=0;
    cin>>n;
    int g[n],b[n];
    
    for(j=0;j<n;j++)
    cin>>b[j];
    
    for(h=0;h<n;h++)
    cin>>g[h];
    
    sort(g,g+n);
    sort(b,b+n);
    
    for(k=0;k<n;k++)
      s=s+g[k]*b[k];
      
      printf("%d\n",s);
  }
 // system("PAUSE");
  return 0;
}
                    
    
                          
