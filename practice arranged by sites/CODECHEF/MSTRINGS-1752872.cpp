#include<iostream>
#include<string.h>
using namespace std;

int main()
{
 int t,i,j,k,l,p;
 cin>>t;
 string s;
 
 while(t--)
 {p=0;
 cin>>s;
 l=s.length();
 if(l==1)
 printf("YES\n");
 else{
 for(i=0;i<l/2;i++)
  {
   if(s[i]!=s[l-i-1]){
   printf("NO\n");
    p=0;break;}
    else p=1;
  }
  if(p==1)
   printf("YES\n");}
 }
 //system("pause");
}