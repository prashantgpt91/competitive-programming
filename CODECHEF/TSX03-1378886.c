#include<stdio.h>
//#include<conio.h>

int main()
{
long long int t,n,m,i,j,k,x,y,z,t1,t2,t3,max,maxindex;
scanf("%lld",&t);
while(t--)
{
          scanf("%lld %lld",&n,&m);
          int a[n];
          for(i=0;i<n;i++)
          a[i]=0;
          int bx[m],cy[m],dz[m];
          
          for(i=0;i<m;i++)
          scanf("%lld %lld %lld",&bx[i],&cy[i],&dz[i]);
          
          for(j=0;j<m;j++)
          {
           t1=bx[j];
           t2=cy[j];
           t3=dz[j];
           
           for(i=t1;i<=t2;i++)
            a[i-1]=a[i-1]+t3;
            
          }
          
          
          max=a[0];
          maxindex=1;
          for(i=1;i<n;i++)
          {
            if(a[i]>=max)
            {
             maxindex=i+1;           
             max=a[i];
            }
          }
          printf("%lld\n",max);
}              
                                                           
//getch();              
}