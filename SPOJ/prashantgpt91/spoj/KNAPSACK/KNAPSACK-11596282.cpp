#include<iostream>
#include<cstdio>
using namespace std;

int knap(int W,int val[],int wgt[],int n)
{
	int i,j;
	int T[n+1][W+1];
	
	for(i=0;i<n+1;i++)
	{
		for(j=0;j<W+1;j++)
		{
			if(i==0 || j==0)
			T[i][j]=0;
			else if(wgt[i-1]<=j)
			T[i][j]=max(val[i-1]+T[i-1][j-wgt[i-1]],T[i-1][j]);
			else
			T[i][j]=T[i-1][j];
		}
	}
	 /*for(i=0;i<n+1;i++){
   for(int j=0;j<W+1;j++){
   printf("%d \t",T[i][j]);
	}
	printf("\n");
}
*/
	return T[n][W];
}
	
int main()
{
	int n,W,i;
	cin>>W;
	cin>>n;
	
	int val[n],wgt[n];
	for(i=0;i<n;i++)
	{
	cin>>wgt[i];
	cin>>val[i];
	}
	
	int ret=knap(W,val,wgt,n);
	cout<<ret<<endl;
}
	