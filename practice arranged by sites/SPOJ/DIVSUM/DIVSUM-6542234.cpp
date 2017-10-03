#include<iostream>
//#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
unsigned long long t,n,i,j,s=0;
double l;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
     { 
        s=0;
       scanf("%lld",&n);
      l=sqrt(n);
      if(n==1 || n==2)
       printf("%lld\n",n-1);
       else{
       for(j=2;j<=l;j++)
        {
         if(n%j==0)
         {  
            s=s+j;       
           if(j!=(n/j))                        
           s=s+(n/j);}              
                                      
           
        }
        
        
        printf("%lld\n",s+1); }  
    }
   return 0;
   // getch();
}



