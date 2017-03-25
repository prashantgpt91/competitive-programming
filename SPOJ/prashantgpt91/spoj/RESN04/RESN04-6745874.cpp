#include<iostream>
#include<algorithm>

using namespace std;
 
 int main()
 {
           int t,i,j,k,n,c;
           cin>>t;
          // printf("A\n");
           for(i=0;i<t;i++)
           {
               cin>>n;            
              int a[n];
          // printf("A\n");
              for(j=0;j<n;j++)
              scanf("%d",&a[j]);
             // printf("A\n");
              sort(a,a+n);
             // printf("A\n");
              for(k=0;k<n;k++)
              {
                if(a[k]%2!=0)
                {
                a[k]=a[k]-1;
                if(a[k]==0)
                break;
                }
              }              
               
              if(k%2==0)
              printf("ALICE\n");
              else
              printf("BOB\n");             
       }
       
       //system("PAUSE");  
return 0;
}
