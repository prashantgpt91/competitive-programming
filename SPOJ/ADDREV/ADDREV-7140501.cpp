#include<iostream>

using namespace std;


int rev(int number)
 {
   int res = 0;
   while (number > 0) 
   {
      res = res * 10 + number%10;
      number /= 10;
   }
   return res;
}

int main()
{
   int t,a,p1,p2,p,b,p3;
      scanf("%d",&t);
   while(t--)
   {
     scanf("%d%d",&a,&b);
     p1=rev(a);
     p2=rev(b);
     p=p1+p2;
     p3=rev(p);
     printf("%d\n",p3);
  }
               
    //system("PAUSE");
}


   
   
   


