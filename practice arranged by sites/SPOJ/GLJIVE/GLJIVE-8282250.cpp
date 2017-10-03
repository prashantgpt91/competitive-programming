#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 int a[10],s=0,i,p,p1,p2;
 for(i=0;i<10;i++)
 cin>>a[i];
 
 for(i=0;i<10;i++)
 {
  p=s;
  s=s+a[i];
  p1=fabs(100-p);
  p2=fabs(100-s);
  if(p1>p2 && s>100)
  {
  printf("%d\n",s);
  break;
  }
  if(p2>p1 && s>100)
  {
  printf("%d\n",p);
  break;
  }
 }
 if(s<100)
 printf("%d\n",s);
 //system("PAUSE");
}
  
 
