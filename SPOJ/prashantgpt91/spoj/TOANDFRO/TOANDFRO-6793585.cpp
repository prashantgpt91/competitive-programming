#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int l,i,j,k,p,n,h,v=0;
    while(1){
    cin>>n;
    v=0;
    if(n==0)
    break;
    char s[201];
    cin>>s;
    l=strlen(s);
    //printf("%d\n",l);
    p=l/n;
    int a[p][n];
    
    for(i=0;i<p;i++)
    {
      if(i%2==0)
      {
              
      for(j=0;j<n;j++){
           a[i][j]=s[v];v++;
           }
      }
      if(i%2!=0)
      {
                              
         for(j=n-1;j>=0;j--)
         {
         a[i][j]=s[v];
         v++;
         }
      }
    }
    
    
    
    for(h=0;h<n;h++)
    {
    for(k=0;k<p;k++)                   
    {
     printf("%c",a[k][h]);
    }
   } 
   printf("\n");       
}
return 0;
   //system("PAUSE");
   
}                          
                                        
