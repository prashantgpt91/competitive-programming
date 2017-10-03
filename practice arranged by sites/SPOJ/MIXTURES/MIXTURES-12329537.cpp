/* try.cpp : Defines the entry point for the console application.

struct event{
int x,y;
};
bool compare1(event i1, event i2)
{  return (i1.y < i2.y)? true: false; }
bool compare2(event i1, event i2)
{  return (i1.x < i2.x)? true: false; }

freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
*/



#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<time.h>
#include<assert.h>
#include<limits.h>
#include<stdlib.h>
#include<map>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<bitset>
#define inf 2000000009
#define pause system("PAUSE")
//Time Complexity of the DP implementation is O(mn)
using namespace std;
int cost[100];
int ans[100][100];
int temp[100][100];

int main()
	{
	int n,i,k,j,L;
	while(scanf("%d",&n)!=EOF)
	{
	for(i=0;i<n;i++)
		cin>>cost[i];

	for(i=0;i<n;i++)
	{
		ans[i][i]=0;
		temp[i][i]=cost[i];
	}

	for(L=2;L<=n;L++)
		{
		for(i=0;i<n-L+1;i++)
			{
			j=i+L-1;
			ans[i][j]=INT_MAX;

			for(k=i;k<=j-1;k++)
				{
					int q=ans[i][k]+ans[k+1][j]+temp[i][k]*temp[k+1][j];
					if(q<ans[i][j])
					{
					ans[i][j]=q;
					temp[i][j]=(temp[i][k]+temp[k+1][j])%100;
					}
				}
			}
		}
	cout<<ans[0][n-1]<<endl;
}
	//pause;
	}














