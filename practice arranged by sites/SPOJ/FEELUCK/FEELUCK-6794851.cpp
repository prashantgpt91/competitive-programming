#include<iostream>


using namespace std;

int main()
{
 int t,n,a[10],maxindex,d=0,i,p,j,h=1,v=0,k,l;
 cin>>t;
 char s[10][110];
int max=0;
 for(i=0;i<t;i++)
 {
    max=0;             
   for(j=0;j<10;j++)
    cin>>s[j]>>a[j];
    
    for(k=0;k<10;k++)
     {
      if(a[k]>max)
      {
      max=a[k];
      maxindex=k;
     }
    } 
      printf("Case #%d:\n",i+1);
    for(d=0;d<10;d++)
    {
      if(a[d]==max)
      printf("%s\n",s[d]);
    }
                     
      
      
              
}     
                 
   
 
 
 
//system("PAUSE");
return 0;
}
