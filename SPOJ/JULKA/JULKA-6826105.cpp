#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
  int t,i,l1,l2,l,j,k,carry=0,h,z,d,borrow=0,p,v,q,q1,v1,q3,q4,q2,x,y,t1,t2,n=0,m=0;
  char a[200],b[200];
  
  for(i=0;i<10;i++)
  {
    carry=0;
    n=0;m=0;
    cin>>a>>b;
    l1=strlen(a);
    l2=strlen(b);
  
    char s[l1+2];
    char s1[l1+1];
    
//logic for addition   
    
  for(j=l1-1,k=l2-1;j>=0;j--,k--)
    {
      if(k>=0)               
      {      
      p=(a[j]-48)+(b[k]-48)+carry;
      
      carry=(p)/10;
      
      p=p%10;
      s[j+1]=p+48;
      }
       
      else
      {
       p=((a[j]-48)+carry);
       carry=(p)/10;
       p=p%10;
       s[j+1]=p+48;
      }
      if(j==0)
      s[j]=carry+48;else;
      
   }s[l1+1]='\0';
  // for(int f=0;f<=l1;f++)
   //printf("%c",s[f]);
   //printf("\n");
 //---------------------------------------------------------------------------------------
 
   //logic for subtraction
    for(j=l1-1,k=l2-1;j>=0;j--,k--)
    {
      if(k>=0)               
      {      
      if(a[j]>=b[k])                       
      p=(a[j]-48)-(b[k]-48);
      else
      {
      p=((a[j]-48)+10)-(b[k]-48);
      for(z=j-1;z>=0;z--){if(a[z]-48>0){
      a[z]=((a[z]-48)-1)+48;break;}
      else
      a[z]=9+48;}
      }
      
      s1[j]=p+48;
      }
       
      else
      {
       p=(a[j]-48);
       s1[j]=p+48;
      }
      
   }
    
//--------------------------------------------------------------------------------------   
 //logic for division
v=0;int quo=0,remainder=0;
q2=(s[v]-48);
while(v<=l1)
{
quo=(q2)/2;
remainder=(q2)%2;
s[v]=quo+'0';
q2=s[++v]-'0'+remainder*10;
}
s[v]='\0';


//---------------------------------------------------------------------------
v1=0;int quo1=0,remainder1=0;
q3=(s1[v1]-48);
while(v1<l1)
{
quo1=(q3)/2;
remainder1=(q3)%2;
s1[v1]=quo1+'0';
q3=s1[++v1]-'0'+remainder1*10;
}
s1[v1]='\0';

 //---------------------------------------------------------------------------    
 
   while(s[n]=='0')
   {
   n++;
   }
   
   if(n!=l1){
   for(y=n;y<=l1;y++)
   printf("%c",s[y]);}
   else
   printf("0");
   
   printf("\n");
   
    while(s1[m]=='0')
   {
   m++;
   }
   if(m!=l1){
   for(x=m;x<l1;x++)
   printf("%c",s1[x]);}
   else
   printf("0");
   printf("\n");
   
}
  //system("PAUSE");
  return 0;
}
