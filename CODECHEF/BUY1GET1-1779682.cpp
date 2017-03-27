#include<iostream>
#include<string.h>
using namespace std;
int a[123],b[123];

int main()
{
 int t,i,j,l,p,ans;
 cin>>t;
 char s[201];
 while(t--)
 {ans=0;
  cin>>s;
  l=strlen(s);
  for(i=0;i<123;i++)
  a[i]=0;
  for(i=0;i<l;i++)
  {
  p=s[i];
  a[p]++;
  }
  for(i=0;i<123;i++)
  ans=ans+(a[i]+1)/2;
  printf("%d\n",ans);
}
  //system("pause");
  
}