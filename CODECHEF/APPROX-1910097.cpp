#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
   char a[]="415926530119026040722614947737296840070086399613316";  
int t,k,i,j,p=0,p1=0;
cin>>t;
while(t--)
{
 cin>>k;
 p=k/51;
 p1=k%51;
 if(k==0)
 printf("3\n");
 else if(k==1)
 printf("3.1\n");
 else
 {
 k--;
 printf("3.1");
 for(j=0;j<p;j++)
 {
 for(i=0;i<51;i++){
 if(k>0){
 printf("%c",a[i]);
 k--;}
 }
 }
 for(i=0;i<p1-1;i++){
 if(k>0)
 printf("%c",a[i]);}
 printf("\n");
}
}
//system("PAUSE");
}