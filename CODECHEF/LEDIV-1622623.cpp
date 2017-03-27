#include<iostream>
#include<algorithm>
#include<cstdio>
#include<math.h>

using namespace std;

int gcd(int a,int b)
{
    return (b==0)?a:gcd(b,(a%b));
}

int main()
{
      int t,n,i,p,ans;
      cin>>t;
      while(t--)
      {
       ans=0;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
      cin>>a[i];
      
      //computing gcd
      p=a[0];
      for(i=1;i<n;i++)
      p=gcd(a[i],p);
      //float fo=sqrt(p);
      //printf("%f\n",fo);
      for(i=2;i<1+(sqrt(p));i++)
      {
       if(p%i==0)
       {
        ans=i;break;
       }
      }      
     
     
      if(p==1)
      printf("-1\n");
      else if(ans==0)
       printf("%d\n",p);
       else
       printf("%d\n",ans);
}
      
     // system("PAUSE");
}