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
#include<stdlib.h>
#include<map>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<bitset>
#define inf 2000000009
#define mod 1000000007
#define pause system("PAUSE")
using namespace std;
long long int a[1004][1004];
 
void fun(long long int x,long long int y,long long int m)
	{
	long long int p1=0;
	long long int p2=0;
	if(x-1>=0)
		 p1=a[x-1][y]%mod;
	if(y-1>=0)
		 p2=a[x][y-1]%mod;
	if(p1<0)
		p1=0;
	if(p2<0)
		p2=0;
	//cout<<p1<<" "<<p2<<endl;
		if(x>=y*m)
			a[x][y]=((p1%mod)+(p2%mod))%mod;
		else
			a[x][y]=-1;
 
		//return a[x][y];
	}
 
 
int main()
	{
	long long int i,j,k,t,n,m;
	cin>>t;
	while(t--)
		{
 
		cin>>n>>m;
		for(i=0;i<=n;i++)
			for(j=0;j<=n;j++)
				a[i][j]=0;
		a[0][0]=1;
 
		//i=dexter score
		//j mandark score
		//i>=m*j
		//start with 0,1
		for(i=0;i<=n;i++)
			{
			for(j=0;j<=n;j++)
				{
				if(i==0 && j==0)continue;
				fun(i,j,m);
				if(a[i][j]==-1)
					break;
				}
			}
		long long int cnt=0;
		/*for(i=0;i<=n;i++)
			{
			for(j=0;j<=n;j++)
				{
				cout<<a[i][j]<<" ";
				}
			cout<<endl;
			}*/
 
		for(i=n;i>=0;i--)
			{
			if(i<(n-i)*m)
				break;
			if(m==1 && i==n-i)
			continue;
			cnt=(cnt+a[i][n-i]%mod)%mod;
			}
		cout<<cnt%mod<<endl;
		}
	}
 