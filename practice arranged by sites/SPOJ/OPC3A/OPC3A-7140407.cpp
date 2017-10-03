#include<iostream>
#define MOD 1000000007
using namespace std;
unsigned long long int g[1000002];

int main()
{
   int t;
   unsigned long long n;
  
   g[0]=1;
   g[1]=2;
   
    for(int i=2;i<=1000000;i++)
    g[i]=((g[i-1])*(g[i-2]))%MOD;
//printf("lol\n");
    cin>>t;
    while(t--)
    {
       cin>>n;
       if(n==0){
       printf("1\n");continue;}
       if(n==1){
       printf("2\n");continue;}
       printf("%llu\n",g[n]);
    }      
//    system("PAUSE");
}


   
   
   

