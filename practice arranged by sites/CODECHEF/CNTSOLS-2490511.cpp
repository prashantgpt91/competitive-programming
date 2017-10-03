#include<iostream>   
#include<algorithm> 
#define xx 1000000007
using namespace std;
unsigned long long int N;

unsigned long long int pow(unsigned long long int a,unsigned long long int b)
{
if(b==0)
 return 1%N;
else if(b==1)
 return a%N;
else if(b%2==0){
	 unsigned long long int k=pow(a,b/2)%N;
 return (k*k)%N;
   }
else
{
 unsigned long long int k=pow(a,b/2)%N;	
 return ((k*k)%N*a)%N;
}
}
int main()
{
 unsigned long long int t,i,j,k,upper,d,m,cnt,x,y;
 cin>>t;
 while(t--)
 {
  cnt=0;
  cin>>upper>>d>>m>>N;
 unsigned long long int range=min(upper+1,N);
  unsigned long long int p=m%N;
          long long int a[N];
                for(i=0;i<N;i++)
                a[i]=0;
                
  for(i=0;i<min(N,upper+1);i++)
  {
  long long int ppp=pow(i,d);
   a[ppp]++;
   long long int pp=(upper-i)/N;
   a[ppp]+=pp;
  }
               /* for(i=0;i<N;i++)
                printf("%d\n",a[i]);
  
  system("PAUSE");    */
                     
  //x1d+x2d+x3d = m (mod N)
   for(i=0;i<range;i++)
   {
    for(j=0;j<range;j++)
    {
	 for(k=0;k<range;k++)
	 {       
	  if((i+j+k)%N==m)
	  cnt=cnt+(((a[i]*a[j])%xx)*a[k])%xx;
     }
    }
   }                      
   printf("%lld\n",cnt%1000000007);
 }
 //system("PAUSE");
}