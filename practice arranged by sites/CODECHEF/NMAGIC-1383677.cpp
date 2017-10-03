#include<iostream>
#include<cstring>
using namespace std;
main()
{
                int i,t;char s[103];bool flag;
                for(scanf("%d\n",&t);t--;)
                {
                    scanf("%s",&s);
                    int len=strlen(s);flag=false;
                    for(i=len-1;i>=0;i--) 
                    {
                    if(s[i]=='7') s[i]='4';
                    else {s[i]='7';flag=true; break;}
                    }
                    if(!flag) printf("4%s\n",s); 
                    else printf("%s\n",s);
                }
              //  system("PAUSE");
}