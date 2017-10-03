#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[100000];
    cin>>s;
    int i,c=0,l;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
      c++;
    }              
    printf("%d",c);
 // system("PAUSE");
return 0;
}        

