#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main()
{
 int t,n,m,i,j,k,p,max,l;
 string maxst;
 cin>>n>>m;
 map<string,int>z;
map<string,string>zz;
 map<string,int>z2;
 
 char chef[n][10],city[n][10];
 for(i=0;i<n;i++)
 {
 cin>>chef[i]>>city[i];
 zz[chef[i]]=city[i];
 }
 char vote[m][10];

 for(i=0;i<m;i++)
 {
 cin>>vote[i];
 if(z2[zz[vote[i]]]==0)
 z2[zz[vote[i]]]=1;
 else
 z2[zz[vote[i]]]++;
 
 if(z[vote[i]]==0)
 z[vote[i]]=1;
 else
 z[vote[i]]++;
 }
 
 map<string,int>::iterator pos;
 pos=z2.begin();
 max=pos->second;
 maxst=pos->first;
    for(pos = z2.begin(); pos != z2.end(); ++pos)
    {
   // cout << "Key: " << pos->first << endl;
    //cout << "Value:" << pos->second << endl;
    p=pos->second;
    if(p>max)
    {
    max=p;
    maxst=pos->first;
    }
}
    //printf("%d\n",p);
    l=maxst.length();
    //printf("%d\n",l);
    for(i=0;i<l;i++)
    printf("%c",maxst[i]);
   


printf("\n");
 //map<string,int>::iterator pos;
 pos=z.begin();
 max=pos->second;
 maxst=pos->first;
    for(pos = z.begin(); pos != z.end(); ++pos)
    {
   // cout << "Key: " << pos->first << endl;
    //cout << "Value:" << pos->second << endl;
    p=pos->second;
    if(p>max)
    {
    max=p;
    maxst=pos->first;
    }
}
    //printf("%d\n",p);
    l=maxst.length();
    //printf("%d\n",l);
    for(i=0;i<l;i++)
    printf("%c",maxst[i]);
   
    
     printf("\n");
 
 
 
 
 //system("PAUSE");
 
 
}