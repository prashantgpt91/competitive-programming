#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
   char s[101];
   char b;
   
   int p=0,l,i;
   cin>>s;
   
   cin>>b;
   l=strlen(s); 
   
   for(i=0;i<l;i++)
   {       
    if(s[i]==b){               
    p=count(s,s+l,s[i]);
    break;}
   }              
    
    cout<<p<<endl;

//system("PAUSE");               
}