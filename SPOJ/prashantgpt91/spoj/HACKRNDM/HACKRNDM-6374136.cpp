#include<iostream>
#include<math.h>
//#include<conio.h>
#include<algorithm>

using namespace std;

int main()
{
     long long n,k,i,j,f,z,c=0,l;
    cin>>n>>k;
    int a[n];
     for(i=0;i<n;i++)
       cin>>a[i];

      sort(a,a+n);
     // for(l=0;l<n;l++)
       //printf("%d ",a[l]);
             
     for(j=0;j<n;j++)
      {
           f=j;          
          while((a[j]+k)>a[f])        
             f++;

             z=fabs(a[j]-a[f]);
             if(z==k)
              c++;
           
      }
      printf("%lld",c);
       // getch();
        return 0;
}         
                                          
