#include<iostream>
//#include<conio.h>

using namespace std;

int main()
{
  int t,x,y,i,j,c=0;
  cin>>t;
  for(i=0;i<t;i++)  
   {
      c=0;              
      cin>>x>>y;
      if((x==0 && y==0) || (x==1 && y==1)){
        printf("%d\n",x);
      c++;}
      if(x==y && x!=1 && x!=0)
      {
         if(x%2==0)
          printf("%d\n",x*2);
        else
         printf("%d\n",((x*2)-1));
         c++;
      }
      
      if(x-y==2)
       {
          if(x%2==0)
           printf("%d\n",x+y);
          else
            printf("%d\n",x+y-1);
            c++;
       }
       
       if(c==0)
       printf("No Number\n");
       }
      return 0;
      // getch();
}                                    
