#include<stdio.h>



int main()
{
          int t,i,j,k,cnt=0,n,max;
          scanf("%d",&t);
          while(t--)
          {
            cnt=0;
           scanf("%d",&n);
            int a[n];
            
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            max=a[0];
            for(j=1;j<n;j++)
            {
             if(max>a[j])
             {
             max=a[j];
             cnt++;
             }
             
            }
            printf("%d\n",cnt+1);
          }
          //system("PAUSE");
}