#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<cstdio>
using namespace std;

int main()
{
int n,i,j,k,cnt=0,l,a;
char temp;
cin>>n>>a;
string s;
cin>>s;


for(j=a;j>0;j--)
{
for(i=0;i<n;i++)
{
 if(s[i]=='B' && s[i+1]=='G')
  {
   temp=s[i+1];
   s[i+1]=s[i];
   s[i]=temp;
   i++;
  }
 }
}

for(i=0;i<n;i++)
printf("%c",s[i]);

//system("PAUSE");
}