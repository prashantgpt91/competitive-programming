#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 float ccr;
 int t,i,j;
 float mu,n,mv,cr,ac;
 int best=0;
 cin>>t;
 while(t--)
 {
  best=0;
  cin>>ccr>>mu>>n;
  float y=mu*ccr;
  for(i=0;i<n;i++)
  {
   cin>>mv>>cr>>ac;
   
   float x=(ac+(cr*mu*mv))/mv;
   if(x<y){
   best=i+1;
   y=x;
   }
  }
  printf("%d\n",best);
}
//system("pause");
}