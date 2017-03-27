#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  int t,i,j,l,k;
  cin>>t;
  for(i=0;i<t;i++)
  {
   char a[100];
   int n;
   cin>>n;
   cin>>a;
   l=strlen(a); 
   
   
   printf("%d ",i+1);
   for(j=0;j<n-1;j++)
   printf("%c",a[j]);
   
   for(k=n;k<l;k++)
   printf("%c",a[k]);
   
   printf("\n");
  }
                 
 // system("PAUSE");
  return 0;
}
                    
    
                          
