#include<iostream>
//#include<conio.h>

using namespace std;

int findgcd(int x,int y);

int main()
{ 
  int x,y,gcd,p,t,i,b=0,c=0;
  cin>>t;
  for(i=0;i<t;i++)
  {
  p=0;
  b=0;
  c=0;                
  cin>>x>>y;
  if(x<0)
   {x=-x;
   b++;}
  if(y<0)
   {y=-y;
   c++;}
  //printf("%d\n%d",x,y);
  gcd=findgcd(x,y);
  //printf("%d\n",gcd);
  if((b!=0 && c!=0) || (b==0 && c==0))
  {
  if(x>y)
  p=(x/gcd)-(y/gcd);
  else
  p=(y/gcd)-(x/gcd);
  }
  else
   p=(y/gcd)+(x/gcd);
  printf("%d\n",p);
  }  
return 0;
//  getch();
}

int findgcd(int x,int y)
{
     while(x!=y){
          if(x>y)
              return findgcd(x-y,y);
          else
             return findgcd(x,y-x);
     }
     return x;
}  
