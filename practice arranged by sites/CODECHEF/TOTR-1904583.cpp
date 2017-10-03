#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
int t,l,i,j,l2;
string s,s2;
l=s.length();
cin>>t;
cin>>s;
char s1[t][102];
for(i=0;i<t;i++)
{
cin>>s1[i];
l2=strlen(s1[i]);
for(j=0;j<l2;j++)
{
if(s1[i][j]=='_')
printf(" ");
else if(s1[i][j]=='?')
printf("?");
else if(s1[i][j]=='!')
printf("!");
else if(s1[i][j]==',')
printf(",");
else if(s1[i][j]=='.')
printf(".");
else if(isupper(s1[i][j]))
printf("%c",toupper(s[s1[i][j]-65]));
else
printf("%c",s[s1[i][j]-97]);
}
printf("\n");
}
/*char s;
s='a';
printf("%d\n",s-97);
*/
//system("PAUSE");
}