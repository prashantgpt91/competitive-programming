#include<iostream>
#include<cstdio>
using namespace std;

int knap(int W,int val[],int wgt[],int c[],int n)
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
			T[i][j]=max((c[i-1]*val[i-1])+T[i-1][j-wgt[i-1]],T[i-1][j]);
			else
			T[i][j]=T[i-1][j];
		}
	}
	 
	return T[n][W];
}
	
int main()
{
	int n,W,i,t;
	cin>>t;
	
	while(t--)
	{
	cin>>n;
	cin>>W;
	int val[n],wgt[n],c[n];
	for(i=0;i<n;i++)
	{
	cin>>c[i];
	cin>>val[i];
	cin>>wgt[i];
	}
	
	int ret=knap(W,val,wgt,c,n);
	cout<<ret<<endl;
	}
}