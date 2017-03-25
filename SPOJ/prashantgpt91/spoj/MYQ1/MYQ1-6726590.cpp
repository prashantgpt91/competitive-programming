#include<iostream>
//#include<conio.h>

using namespace std;

int main()
{
unsigned long long t,i,j=0,k=0,l,u,num,temp,p,q,h;
char S,D,W,L,R,A,M;
     scanf("%lld",&t);
     for(i=0;i<t;i++)
     {
        k=0;             
   scanf("%lld",&num);
       
       if(num==1)
       printf("poor conductor\n");                   
       
       
       else{
      p=num%5;
      q=num%10;
      
     if(p==0 || p==1) 
     h=(num/5);
     else
     h=(num/5)+1;
      
      if(q==1 || q==2 || q==6 || q==7)
       S='W';
      if(q==0 || q==3 || q==4 || q==9)
      S='A';
      if(q==5 || q==8)
      S='M';
      
      if(p==q && p!=4)
D='L';
if(p != q || p==4)
D='R';
      
       printf("%lld %c %c\n",h,S,D);
}
}
         
return 0;         
//getch();
}                       








