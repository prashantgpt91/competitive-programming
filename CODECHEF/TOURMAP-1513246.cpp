#include<iostream>
#include<map>
#include<string>
#include<set>
#include<math.h>

using namespace std;
 
 struct rv{
           char s1[52],s2[52];
           }cool;

int main()
{
          int t,n,i,j,k,totcost=0,c,l,u;
          cin>>t;
          for(i=0;i<t;i++)
          {
           char m[52];
           totcost=0;
           cin>>n;
           char sa[n][52];
           n--;
           j=0;
           map<string,rv>hash;
           set<string>ss;
           u=n;
           while(n--)
           {
           cin>>sa[j]>>cool.s1>>cool.s2;             
           hash[sa[j]]=cool;
           ss.insert(cool.s1);
           l=strlen(cool.s2);
           for(k=l-2;k>=0;k--)
           {
           c=cool.s2[k]-'0';
           totcost+=c*pow(10,l-2-k);
           //printf("%d\n",totcost);
           }
           j++;
           }
           //printf("hahahahah %d\n",totcost);
           for(k=0;k<u;k++)
           {
           if(ss.count(sa[k])==0)
           {
           strcpy(m,sa[k]);
            while(u--)
            {
             printf("%s %s %s\n",m,hash[m].s1,hash[m].s2);
            
             strcpy(m,hash[m].s1);
            }
             printf("%d",totcost);
             printf("$\n");
            break;
           }
          }
         
}
//system("PAUSE");
}