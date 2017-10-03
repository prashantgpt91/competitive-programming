//http://www.codechef.com/problems/PPTEST/

#include<iostream>
#include<cstdio>
using namespace std;
int T[2][2000002];
int knap(int W,int val[],int wgt[],int n)
{
	int i,j;
	
	for(i=0;i<n+1;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<W+1;j++)
			{
			if(i==0 || j==0)
			T[0][j]=0;
			else if(wgt[i-1]<=j)
			T[0][j]=max(val[i-1]+T[1][j-wgt[i-1]],T[1][j]);
			else
			T[0][j]=T[1][j];
			}
		}
		else
		{
			for(j=0;j<W+1;j++)
			{
			if(i==0 || j==0)
			T[1][j]=0;
			else if(wgt[i-1]<=j)
			T[1][j]=max(val[i-1]+T[0][j-wgt[i-1]],T[0][j]);
			else
			T[1][j]=T[0][j];
			}
		}
	}
	if(n&1)
		return T[1][W];
	else
		return T[0][W];
}
	
int main()
{
	int n,W,i,t;
	
	cin>>W;
	cin>>n;
	int val[n],wgt[n];//,c[n];
	for(i=0;i<n;i++)
	{
	cin>>val[i];
	cin>>wgt[i];
	}
	
	int ret=knap(W,val,wgt,n);
	cout<<ret<<endl;
	
}
	