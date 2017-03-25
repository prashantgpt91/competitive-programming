#include<iostream>
//#include<string.h>
using namespace std;

int main()
{
     int n,i,j,k=0,h=0;
         cin>>n;
         for(i=0;i<n;i++)
         {
          for(j=0;j<n;j++)
          {
             if(i==n/2  )
               printf("*");
              
             
             /*if(j==n/2)
             { 
               while(h<n)
               {                           
               printf("*");
               h++;
               }
             }*/
             
            else if((i+j)==n/2||(i-j)==n/2|| j==n/2 || (j-i)==n/2 || (i+j)==3*((n-1)/2))
             printf("*");
             
             else
             printf(" ");
          }
          cout<<endl;
         }
             
             
           
                                          
                        
   // system("PAUSE");
    return 0;
}                                
