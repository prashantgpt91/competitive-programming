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
int a[100005];
int main()
	{
	int i,j,n,m;
	
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
 
	map<int,int>m1;
 
	for(i=1;i<=n;i++)
		m1[a[i]]=0;
 
    int maxaward=-1;
	int maxage=-1;
	for(i=1;i<=n;i++)
		{
		m1[a[i]]++;
		if(m1[a[i]]>maxaward)
			{
			maxaward=m1[a[i]];
			maxage=a[i];
			}
		else if(m1[a[i]]==maxaward)
			{
			if(maxage<a[i])
				maxage=a[i];
			}
		cout<<maxage<<" "<<maxaward<<endl;
		}
//	pause;
	}
 