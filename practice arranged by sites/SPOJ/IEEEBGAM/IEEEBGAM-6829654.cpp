#include<iostream>

using namespace std;

int main()
{
   int t,i,n;
   double q1,q2;
   long double q;
   
   cin>>t;
   for(i=0;i<t;i++)
   {
    cin>>n;
    if(n==0){
    printf("0\n");continue;
   }
    q1=(double)1/(n+1);
    q2=(double)n;
   // q=(double)q1*q2;
    printf("%0.8lf\n",q1*q2);
   }
   
 //system("PAUSE");
 return 0;
}  
    
    
    
    
    
    
    
       
                          
