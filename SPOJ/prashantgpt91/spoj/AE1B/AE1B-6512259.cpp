#include<iostream>
#include<algorithm>
//#include<conio.h>

using namespace std;

int main()
{
   int n,b,c,p,i,j,k;
    cin>>n>>b>>c;
    p=b*c;
    int m[n];
    for(i=0;i<n;i++)
    cin>>m[i];
    //for(i=0;i<n;i++)
     //printf("%d\n",m[i]);
    if(n==1)
    printf("1\n");
    else{
    
    sort(m,m+n);
  //  for(i=0;i<n;i++)
   //  printf("%d\n",m[i]);
    for(j=n-1;j>=0;j--)
    {
//     printf("%d\n",p);
  
     p=p-m[j];
   // printf("%d\n",p);
    //printf("2\n");
     if(p<=0)
     {
      k=j;
      //printf("%d",k);
      break;
     }
    }
     
 printf("%d\n",n-k);}
return 0;
// getch();
}    
      
      
     
     
    
    
