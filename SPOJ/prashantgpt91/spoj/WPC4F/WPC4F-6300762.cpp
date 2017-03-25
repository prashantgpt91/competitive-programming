#include<iostream>
//#include<conio.h>
 using namespace std;
  
  int main()
  {
      int t,n,i,temp,j,k,p,q,min,z,y;
      cin>>t;
      for(i=0;i<t;i++)
      {
         cin>>n;
         int a[n][3];
         for(j=0;j<n;j++)
         {
           for(k=0;k<3;k++)
            {
              scanf("%d",&a[j][k]);
            }
         } 
         
        // for(g=0;g<n;g++){
          //for(h=0;h<3;h++){
           //printf("%d\n",a[g][h]);}}
       
       for(j=n-2;j>=0;j--)
       {
         for(k=0;k<3;k++)
           {
                if(k==0){
                  p=1;
                  q=2;}
                if(k==1){
                   p=0;
                   q=2;}
                 if(k==2){
                  p=0;
                  q=1;}
                  
                           
               if(a[j+1][p]>=a[j+1][q])
                 min=a[j+1][q];
                else
                min=a[j+1][p];           
               a[j][k]=(a[j][k])+min;
              // printf("%d\n %d\n %d\n ",a[0][0],a[0][1],a[0][2]); 
           }   
           
       }
       //printf("%d\n%d\n%d\n ",a[0][0],a[0][1],a[0][2]); 
       if(a[0][0]>a[0][1])
         z=a[0][1];
         else
         z=a[0][0];
       if(z>a[0][2])
        y=a[0][2];
        else
        y=z;  
       printf("%d\n",y); 
       }
return 0;
//getch();
}               
               
               
               
               
               
                                  
           


         
                      
         
