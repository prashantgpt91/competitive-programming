#include<iostream>

using namespace std;

int main()
{
   int t,i,j,k,h;
   long long int r=0;
   cin>>t;
   for(i=0;i<t;i++)
   {
     // char v='+';
     // char x='-';
     // char y='*';
     // char z='/';            
       j=0;
       r=0;
       
      char a[10000];  
      int b[10000];
     while(1)                     
     {
       if(j%2!=0)                           
       cin>>a[j];
       else
       cin>>b[j];
       
       if(a[j]=='=')
       break;
       j++;                                                                                                    
     } 
     //printf("%d\n",j);  
    // for(k=0;k<j;k++)
     //{
     //  if(k%2!=0)
    //   printf("%c ",a[k]);
    //   else
    //   printf("%d ",b[k]);
   //  }               
     
     
     
    // printf("%d\n",j);   
    // printf("%c %c %c",a[0],a[1],a[3]);
    // printf("%c",a[1]);
                           
      //for(z=0;z<j;z++)
       //printf("%c",a[z]);
                                                         
for(h=1;h<j-1;h+=2)
{         
  if(a[h]=='+')
  {
   r=(b[h-1])+(b[h+1]); 
   //printf("%d\n",r);       
   b[h+1]=r;
  }
  
  if(a[h]=='-')
  {
   r=(b[h-1])-(b[h+1]);        
  // printf("%d\n",r);
   b[h+1]=r;
  }
  
  if(a[h]=='*')
  {
   r=(b[h-1])*(b[h+1]);        
   //printf("%d\n",r);
   b[h+1]=r;
  }
  
  if(a[h]=='/')
  {
   r=(b[h-1])/(b[h+1]);        
  // printf("%d\n",r);
   b[h+1]=r;
  }

}            
      printf("%lld\n",r);
   }
  // system("PAUSE");
   return 0;
}                                      



