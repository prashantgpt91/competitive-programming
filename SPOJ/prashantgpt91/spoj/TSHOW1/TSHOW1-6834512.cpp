#include<iostream>
//#include<conio.h>
#include<string.h>
using namespace std;
 
int main()
{
     unsigned long long int t,n,i,l;
     int j=0;
     cin>>t;
   char a[]="5";
   char b[]="6";
   
   char e[100];
   for(i=0;i<t;i++)
     {
   
      strcpy(e,"");  
       char a[]="5";
   char b[]="6";
   
    
        cin>>n;
 
      
        while(n!=0)
        {
          if(n%2==1)
           strcat(e,a);
          if(n%2==0)
           strcat(e,b); 
          
           
           n=(n-1)/2;  
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
   
                       
 
