#include<iostream>
#include<climits>
using namespace std;

main()
{
               long long int i,t,n,k,j,low,high,mid;
                bool flag;
                long long int avg;                                    
               long long int c[102000],d[102000];
                for(scanf("%lld",&t);t--;)
                {
                  avg=0;low=LONG_MAX;
                  scanf("%lld",&n);
                  for(i=0;i<n;i++) {scanf("%lld",&c[i]);avg+=c[i];if(low>c[i])low=c[i];}
                  avg/=n;high=avg;
                 // cout<<high<<" "<<low<<endl;
                  
                  for(;high>=low;)
                  {
                       mid=(low+high)/2;
                      // cout<<"mid "<<mid<<endl;
                       //copy operation
                       for(j=0;j<n;j++) d[j]=c[j];
                        //for(int m=0;m<n;m++) cout<<d[m]<<" ";cout<<endl;
                        
                       //validation
                       flag=true;
                       for(j=0;j<n;j++) 
                       {
                           
                           if(d[j]<mid) {flag=false;break;}
                           else if(d[j]>mid && j!=n-1) {d[j+1]+=d[j]-mid;d[j]=mid;} 
                         // for(int m=0;m<n;m++) cout<<d[m]<<" ";
                         // cout<<endl;
                       }   
                     // cout<<"flag "<<flag<<endl;         
                       if(flag) {low=mid+1;k=mid;}
                       else high=mid-1;
                  }
                  printf("%lld\n",k);
                } 
                //system("PAUSE");
}