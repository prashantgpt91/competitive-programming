#include<iostream>
//#include<conio.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,i,j,k,n,c=1,temp=0,p,h,z;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {temp=0;
      scanf("%d",&n);
      int a[n];
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);
         
      sort(a,a+n);
         
    for(j=0;j<n;j+=z)
    {c=1;
        for(h=j+1;h<n;h++)
          {
            z=h;
            if(a[j]==a[h])
             c++;
             else
             break;
          }
       if(c>temp){
        temp=c;
      //  printf("%d\n",temp);
      p=a[j];    }
    }
    //printf("%d %d\n",n/2,temp);
     if(temp>n/2)
      printf("YES %d\n",p);
      else
      printf("NO\n");
      }
     
     //getch();
     return 0;
     }
     
     
                        
    
    
    
    
    


