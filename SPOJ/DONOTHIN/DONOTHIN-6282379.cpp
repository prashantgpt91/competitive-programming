#include<iostream>
//#include<conio.h>
using namespace std;
 
 int main()
 {
    long long int N,M,i,S,j; 
    while(1)
    {
       S=0;     
       cin>>N;
       cin>>M;
        
       if(N==-1 &&  M==-1)
       break;
       int C[N];
      
               
       for(i=0;i<N;i++)       
          cin>>C[i];
          //for(i=0;i<N;i++)
          //printf("%d",C[i]);
        
        j=N;
      for(i=0;i<N;i++){
                    
        S=S+(C[i]*M*j);
        //printf("%d\n",S);
        j--;
        }
     
     printf("%lld\n",S);
    }
//     getch();
     return 0;
}     
       
          
                               
