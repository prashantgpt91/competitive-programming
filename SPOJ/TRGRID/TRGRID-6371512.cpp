#include<iostream>
//#include<conio.h>
 
using namespace std;
 
int main()
{
    int t,i,M,N;
    cin>>t;
    for(i=0;i<t;i++)
    {
        M=0;
        N=0;            
      cin>>N>>M;
      if(M>=N)
       {
           if(N%2!=0)
            printf("R\n");
           else
               printf("L\n");
       }
      if(M<N)
       {
             if(M%2!=0)
              printf("D\n");
             else
             printf("U\n");
       }
      /*if(C==R)
       {
          if(R%2!=0)
           printf("R");
          else
            printf("L");
       } */     
       
    }
return 0;
 //getch();
}                
                     
