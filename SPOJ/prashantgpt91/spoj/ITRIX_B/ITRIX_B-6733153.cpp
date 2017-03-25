#include<iostream>
//#include<conio.h>
#include<string.h>
using namespace std;
 
int main()
{
     unsigned long long int t,n,i,l;
     int j=0;
     cin>>t;
   char a[]="2";
   char b[]="3";
   char c[]="5";
   char d[]="7";
   char e[100];
   for(i=0;i<t;i++)
     {
   
      strcpy(e,"");  
       char a[]="2";
   char b[]="3";
   char c[]="5";
   char d[]="7";
    
        cin>>n;
 
      
        while(n!=0)
        {
          if(n%4==1)
           strcat(e,a);
          if(n%4==2)
           strcat(e,b); 
          if(n%4==3)
           strcat(e,c);
           
          if(n%4==0)
           strcat(e,d); 
           
           
           n=(n-1)/4;  
        }
    
        l=strlen(e);
        //printf("%lld",l);
       for(j=l-1;j>=0;j--)
        printf("%c",e[j]); 
        
       printf("\n");    
                                 
}
       return 0;  
    // getch();
}  
   
                       
 