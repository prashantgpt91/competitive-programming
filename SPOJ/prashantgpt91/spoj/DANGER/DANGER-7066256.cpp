#include<iostream>
//#include<string.h>
//#include<conio.h>
#include<math.h>
using namespace std;
 
int main()
{
    char s[5];
 int i,j;
int a,b,c,m,v,z;
 double x,y;
 long long int f,n,p;
    while(1)
    {
   cin>>s;
    for(i=0;i<4;i++)
      s[i]=s[i]-48;        
  //   printf("%d\n",s[i]);}
a=s[0];
b=s[1];
c=s[3];
 
   if(s[0]==0 && s[1]==0 && s[3]==0)
     break;
//printf("%d\n%d\n%d",a,b,c);    
//printf("%d\n%d\n%d",s[0],s[1],s[3]);
  n=((a*10)+(b*1))*pow(10,c);
  //printf("%d\n",n);
   
    x=log10(n);
    y=log10(2);
    f=floor(x/y);
    //printf("%lld\n",f);

    p=1+(2*n)-pow(2,1+f);
    printf("%lld\n",p);

   }  
   
  
  return 0;
//    getch();
}

//http://mathworld.wolfram.com/JosephusProblem.html

