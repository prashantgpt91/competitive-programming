#include<iostream>
using namespace std;


 long int scribers,books;
 long int bookpages[1000];
 long int bookscribe[1000];
 long int totpages;



long int assign_pages(double temp)
{
      long int j=books-1,p;
                
  for(long int i=scribers-1;i>=0;i--)
  {        
    if(temp<bookpages[j])return 0;   
       bookscribe[j]=i; //jth book is given to ith scriber
       p=bookpages[j--];   
       while(j>=i && (p+bookpages[j])<=temp)
       {
        bookscribe[j]=i;
        //printf("hello\n");
        p=p+bookpages[j--];
      }
  }
  if(j!=-1)return 0;
   return 1;
}              
   
   
long int findmax(long int temp1)
{
  double hi=temp1,lo=0;
  //printf("%d ye hai %d\n",hi,lo);
   // printf("%d\n",temp1);
  double mid=hi;
   
  while(hi-lo>0.0001)
  {
    //printf("%lf %lf %lf\n",lo,mid,hi);
    if(assign_pages(mid))
    hi=mid;  
    else
    lo=mid; 
    mid=(lo+hi)/2.0;
  }
 if(mid-(long int)mid>0.5)mid++;else;
  return (long int)mid;
 
}


  

int main()
{
  long int t;
  cin>>t;
  totpages=0;
   
  while(t--)
  {
  totpages=0;  
   cin>>books>>scribers;                   
   
   for(long int i=0;i<books;i++)
   {
   cin>>bookpages[i];
  
   totpages+=bookpages[i];
   
   } 
 
   long int maxpages=findmax(totpages);
   
   assign_pages(maxpages);
   
   printf("%ld ",bookpages[0]);
   
  
   for(long int z=1;z<books;z++)
   {
     if(bookscribe[z]!=bookscribe[z-1])
     printf("/ ");
     printf("%ld ",bookpages[z]);      
   }
   printf("\n");
}
//system("PAUSE");
return 0;
}
    
    
      
      
                                       
                 
   
   
   
                    


