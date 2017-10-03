#include<iostream>
#include<string.h>
using namespace std;

int main()
{

int i,j,c=0,l,s=0,flag=0,h;
char a[10000];
for(h=0;h<5;h++)
{
cin>>a;

flag=0;
 l=strlen(a);
 for(j=0;j<l-2;j++)
 {          
   if(a[j]=='F' && a[j+1]=='B' && a[j+2]=='I')
   {
   printf("%d\n",h+1);
   flag=1;
   c++;
   break;
   }
 }    

 
}

if(flag==0 && c==0)
printf("HE GOT AWAY!\n");




                 
  //system("PAUSE");
  return 0;
}
                    
    
                          
