#include<iostream>

using namespace std;

int main()
{
    long long int t,a,b,i,c,s;
    double p1,p2;
   
   while(1)
   {
     scanf("%lld%lld%lld",&a,&b,&c);
     if(a==0 && b==0 && c==0)
     break;
     p1=b-a;
     p2=c-b;
     
     
     if(p1==p2){
      s=((b-a)*3)+a;
      printf("AP ");}
      else
      {
      printf("GP\n");
       s=a*(b/a)*(b/a)*(b/a); }
   
   printf("%lld\n",s);
   }
return 0;
//   system("PAUSE");
}  
      
       
     
       
          
                                    

