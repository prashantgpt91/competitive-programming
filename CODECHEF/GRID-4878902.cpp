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


//#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<time.h>
#include<assert.h>
#include<stdlib.h>
#include<map>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<bitset>
#define inf 2000000009
#define pause system("PAUSE")
using namespace std;

int main()
{
	int t,i,n,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char a[n+1][n+1];
		int b[1002];
     	int c[1002];

		memset(b,-1,sizeof(b));
		int x=1;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='#')
				 b[x]=j;
			}
			x++;
		}
		x=1;
		memset(c,-1,sizeof(c));
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[j][i]=='#')
				 c[x]=j;
			}
			x++;
		}
		//for(i=1;i<=n;i++)
		//cout<<c[i]<<" ";
		//cout<<endl;
		int s=0;
		j=1;
		int f;
		for(j=1;j<=n;j++)
		{
		f=0;
		if(b[j]==n)
		continue;
		if(b[j]==-1)
		b[j]++;
		for(x=b[j]+1;x<=n;x++)
		{
		//if(c[x]==n)
		//continue;
		if(c[x]<j)
		{
		//cout<<" chk "<<j<<c[x]<<endl;
		s++;
		}
		}
			
	}
			
	cout<<s<<endl;
	}
}