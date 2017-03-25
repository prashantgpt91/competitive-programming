#include<iostream>

using namespace std;

int main()
{
    long long int t,a,b,i,c,s;
    double p1,p2;
   cin>>t;
   for(i=0;i<t;i++)
   {
     scanf("%lld%lld%lld",&a,&b,&c);
     p1=b-a;
     p2=c-b;
     
     
     if(p1==p2)
      s=((b-a)*3)+a;
      else
       s=a*(b/a)*(b/a)*(b/a); 
   
   printf("%lld\n",s);
   }
return 0;
//   system("PAUSE");
}  
      
       
     
       
          
                                    
