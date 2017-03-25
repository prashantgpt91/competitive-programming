#include<iostream>


using namespace std;

int main()
{
   int n,k,i,j,h,m,maxindex,max=0,g,l;
   scanf("%d",&n);
   printf("\n");
   
   int a[n];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   
scanf("%d",&k);
  
  for(j=0;j<k;j++)
  {
   if(a[j]>=max)
   {               
     max=a[j];
     maxindex=j;
   }  
     
  }
   printf("%d ",max);
  
  
  
  for(h=k;h<n;h++)
  {
    if(maxindex==h-k)
    {max=0;
       for(l=h-k+1;l<=h;l++)
       {                
         
         if(a[l]>=max)
         {
           max=a[l];
           maxindex=l;
         }
      }
      printf("%d ",max);                                                         
    }
    
   
   
   else {if(a[h]>=max)
    {
      max=a[h];
     printf("%d ",max);                    
      maxindex=h;
    }
    else
    printf("%d ",max);                    
} 
   
}
  //system("PAUSE");
  return 0;
}        
          
                                                                 
  
  
  
