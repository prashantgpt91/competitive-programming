#include <cstdio>
#include<vector>
#include<map>
#include<iostream>
#include <algorithm>
#include <cstring>
#include<string.h>
using namespace std;
#define inf 99999;
 
int main()
{
	int n,e,i,j,q;
	string s,s2;
	map<string,int>m;
	cin>>n>>e;
	int k=1;
	
	for(i=0;i<n;i++)
	{
		cin>>s;
		m[s]=k;
		k++;
	}
	int grid[105][105];
	
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		    grid[i][j]=inf;
		    
	int x;
 
	for(i=0;i<e;i++)
	{
		cin>>s>>s2>>x;
		grid[m[s]][m[s2]]=x;
		grid[m[s2]][m[s]]=x;
	}
	
	for(i=1;i<=n;i++)
	grid[i][i]=0;
	
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(grid[i][k]+grid[k][j]<grid[i][j])
				grid[i][j]=grid[i][k]+grid[k][j];
			}
		}
	}
	
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>s>>s2;
		cout<<grid[m[s]][m[s2]]<<endl;
	}
}
