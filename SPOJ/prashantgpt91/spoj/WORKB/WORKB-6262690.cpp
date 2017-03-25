#include<iostream>
//#include<conio.h>
 using namespace std;
 
int main()
{
    int b,i,j,k,q,D=0,t,f=0,c=1;
    unsigned long long n,a,T;
    cin>>t;
    for(k=0;k<t;k++)
    {
        T=0,D=0,c=1;
      cin>>n>>a>>b;
      int d[n];
       for(i=0;i<n;i++)
         cin>>d[i];
      
        if(n==1)
      printf("Case #%d: %d\n",k+1,b+a+a);  else{
         for(j=0;j<n-1;j++)
          { 
            q=d[j+1]-d[j]-1; 
          //if(q==0)
          //  q=1;        
                 if((q*b)<=(a*2))
                  D=D+q; 
                 else
                  c+=2;
          }
         T=(D*b)+(c*a)+(n*b)+a;
        printf("Case #%d: %lld\n",k+1,T);}
    }
  //      getch();
return 0;
}   
 

