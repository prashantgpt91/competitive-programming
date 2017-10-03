#include<iostream>
//#include<conio.h>
#include<algorithm>

using namespace std;

int binarysearch(int arr[],int size,int item);

int main()
{
    int N,i,j,k,t,c=0,p,l=0;
    while(1)
    {
        c=0;    
      scanf("%d",&N);
       if(N==0)
        break;
        
      int a[N];
      
      for(k=0;k<N;k++)
        scanf("%d",&a[k]);
        
    sort(a,a+N);
     for(i=0;i<N;i++)
     {
       for(j=i+1;j<=N-1;j++)
       {
          t=a[i]+a[j];
          p=binarysearch(a,N,t);
          c+=N-p;
       }
     }  
                       
    
     printf("%d\n",c);}
     
     //getch();
     return 0;
}

int binarysearch(int arr[],int size,int item)
{
    int low=0,up=size-1,mid;
    
    while(low<=up)
    {
      mid=(low+up)/2;
      if(item>=arr[mid])
         low=mid+1;
      else if(item<arr[mid])
         up=mid-1;
      else
        return mid;
    }
    
    return up+1;                    
}                                


