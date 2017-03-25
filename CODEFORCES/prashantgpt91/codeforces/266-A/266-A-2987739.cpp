#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<cstdio>
using namespace std;

int main()
{
int n,i,j,k,cnt=0,l;
cin>>n;
string s;
cin>>s;
l=s.length();

for(i=0;i<l-1;i++)
{
 if(s[i]==s[i+1])
 cnt++;
}

printf("%d\n",cnt);
//system("PAUSE");
}