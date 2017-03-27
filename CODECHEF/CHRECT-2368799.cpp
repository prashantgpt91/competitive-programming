#include<iostream>
using namespace std;
  
int main()
{
   long long int t,k,i,j,n,m;
 	cin>>t;
 	
 	while(t--)
 	{
    cin>>n>>m>>k;
    if(n==1 && m==1)
    printf("0\n");
    else if(n==1 && m==2)
     printf("0\n");
    else if(m==1 && n==2)
     printf("0\n"); 
    else if(n==1 || m==1)
     printf("%lld\n",k);
    else if(k%2==0)
	 printf("%lld\n",k/2);
	 else
	 printf("%lld\n",(k+1)/2); 
     
     }
    //system("pause");
}