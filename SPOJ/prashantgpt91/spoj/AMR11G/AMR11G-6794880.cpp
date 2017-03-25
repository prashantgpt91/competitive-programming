#include<iostream>
#include<string.h>

using namespace std;

int main()
{
 int t,i,l,j,c=0;
 cin>>t;
 char s[100];
 for(i=0;i<t;i++)
 {c=0;
   cin>>s;
   l=strlen(s);
   for(j=0;j<l;j++)
   {
    if(s[j]=='D')
    {
    printf("You shall not pass!\n");     
    c++;
    break;
    }
   }
   if(c==0)
    printf("Possible\n");
    
   
}                        
 
 
 
//system("PAUSE");
return 0;
}
