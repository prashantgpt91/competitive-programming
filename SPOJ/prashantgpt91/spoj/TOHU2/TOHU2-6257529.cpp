#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    int i,t,j,p,k,x=0;
    char a[100];
    cin>>t;
    for(i=0;i<t;i++)
    {
      for(j=1;j<=99;j++){              
    int num;
    char c;
    cin>>num>>c;
    a[num]=c;}
     
     for(k=9;k<=81;k+=9){
      if(a[k]!=a[9]){
        x++;
         break;}
        }
        if(x!=0)
          cout<<"NO"<<endl;
           else
           cout<<"YES"<<endl;}
           
    
//     getch();
   return 0;
}
        
          
          






