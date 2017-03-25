#include<iostream>
//#include<conio.h>
#include<algorithm>
using namespace std;

int main()
{   
     int n,i,j,a,b,k=0,c=0,l=0,m=0,z=0,p;     
    cin>>n;
  //  if(n==0)
   //  exit(1);
    float y[n];
    while(k<n)
    {
              
  char x[3];
  
    for(i=0;i<3;i++)
      cin>>x[i];
     
     a=x[0]-48;
     b=x[2]-48;
     
     y[k]=1.0*a/b;
     
     k++;
    }
     sort(y,y+n);
     //for(j=0;j<n;j++)
     //printf("%f\n",y[j]);
   
  while(c<n)  { 
  if(y[c]*4==1)     
      l++;
  if(y[c]*2==1)
     m++;
   if(y[c]*4==3)
     z++;      
     
     c++;} 
     
    // printf("%d %d %d",l,m,z);
      
   int s=0;
   p=1+(m/2);
   m=m%2;
  
  if(z>=l)
       p=p+m+z;
          
    if(l>z)
    {
   p=p+z;
   l=l-z;
   p=p+(l/4);
   l=l%4;
  // printf("%d\n",p);
    if(m==0 && (l==1 || l==2 || l==3))
     p++;
    else if(m==1 && l==3)
      p+=2;
    else
     p++;  
      
     // printf("%d\n",p);
    }
    
  
     
  

    printf("%d",p);
   //getch();
}
     
        


