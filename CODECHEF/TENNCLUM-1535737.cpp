#include<iostream>
#include<string>
using namespace std;
int main()
{
    
    int l,i,t,n,cc,cs,fc,fs;
    
    cin>>t;
    while(t--)
    {
    fs=0;cc=0;cs=0;fc=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(i=0;i<n;i++)
    {
                    if(s[i]=='S')
                    {
                                 if(cs==30)
                                 cs+=10;
                                 else if(cs==40)
                                 {fs+=1;cs=0;cc=0;}
                                 else
                                 cs+=15;
                                 }
                    if(s[i]=='C')
                    {
                                 if(cc==30)
                                 cc+=10;
                                 else if(cc==40)
                                 {fc+=1;cc=0;cs=0;}
                                 else
                                 cc+=15;
                                 }
                                 }
   if(fs>0 || fc>0)
   {
           if(cs>0 || cc>0)
           cout<<fs<<"-"<<fc<<","<<cs<<"-"<<cc<<endl;
           else
           cout<<fs<<"-"<<fc<<endl;
           }
           else
           cout<<cs<<"-"<<cc<<endl;
           }
          // system("pause");
           return 0;
           }