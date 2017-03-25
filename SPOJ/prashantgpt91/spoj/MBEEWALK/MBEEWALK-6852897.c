#include<iostream>
using namespace std;

int main()
{
        unsigned long long int n,t,i,j;
          54810, 290640, 1588356, 8676360, 47977776, 266378112, 1488801600,
         cin>>t;
         unsigned long long a[14];
         a[0]=0;
         a[1]=6;
         a[2]=12;
         a[3]=90;
         a[4]=360;
         a[5]=2040;
         a[6]=10080;
         a[7]= 54810;
         a[8]=290640;
         a[9]=1588356;
         a[10]=8676360;
         a[11]=47977776;
         a[12]=266378112;
         a[13]=1488801600;
         


         for(i=0;i<t;i++)
         {
            cin>>n;
            printf("%llu\n",a[n-1]);
         }
        // system("PAUSE");
         return 0;
}
            
                          
