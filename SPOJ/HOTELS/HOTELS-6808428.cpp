#include<iostream>
using namespace std;
main()
{
	int i,n,m,max=0,j=0,sum=0;
                scanf("%d%d",&n,&m);
                 int arr[n];
	for(i=0;i<n;i++) 
                   scanf("%d",&arr[i]);
	for(i=0;i<n;i++) 
	{
	sum=sum+arr[i];
                  for(;sum>m;){ 
                  sum=sum-arr[j];
                 j++;}
	if(max<sum)
                 max=sum;
                 if(max==m)
                 break;
	}
	printf("%d\n",max);                               
return 0;
}

