#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 unsigned long long int t,n,i,j,k,d=1,a,b,c,s=0,p,h;
  cin>>t;
  for(i=0;i<t;i++)
  {
        s=0; 
        d=1;         
   cin>>n;
   
 unsigned long long int arr[n];
   cin>>a>>b>>c;
   for(j=0;j<n;j++)
    arr[j]=((a*(j+1))+b)%c;
   
   if(n==1){
   printf("%llu\n",arr[0]);continue;} 
   sort(arr,arr+n);
   s=arr[0]+arr[n-1];
   
   for(k=n-2;k>=1;k--)
   {
     if(d%2==1)                 
     s=s-arr[k]; 
     else
     s=s+arr[k];
     
    d++; 
   }
   //printf("%d\n",s);
  
 
   printf("%llu\n",s);
}
//system("PAUSE");
return 0;
}


                     
   
    
                                           
