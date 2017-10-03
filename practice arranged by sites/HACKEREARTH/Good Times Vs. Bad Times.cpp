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
 
int a[24][60][60];
//gcd
int gcd(int a,int b)
	{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
	}
 
int main()
	{
	int h,m,s,i,j,k,cnt=0,y,t;
	int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};
	//preprocessing
	for(i=23;i>=0;i--)
		{
		for(j=59;j>=0;j--)
			{
			for(k=59;k>=0;k--)
				{
				for(y=0;y<17;y++)
					{
					if(i%prime[y]==0 && j%prime[y]==0 && k%prime[y]==0)
						{
						cnt++;
						break;
						}
					}
				a[i][j][k]=cnt;
				}
			}
		}
	
	cin>>t;
	while(t--)
		{
		cin>>h>>m>>s;
		//bad seconds
		int bad=a[h][m][s];
		//total seconds
		int tot=((23-h)*60*60)+((59-m)*60)+(60-s);
		//good seconds
		int good=tot-bad;
		int cmn=gcd(good,bad);
		if(bad==0)
			cmn=1;
		cout<<bad/cmn<<":"<<good/cmn<<endl;
		}
	}