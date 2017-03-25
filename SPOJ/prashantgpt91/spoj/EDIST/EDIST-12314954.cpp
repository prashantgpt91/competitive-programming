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
int cost[2002][2002];



int count_edit(string s1,string s2)
	{
	int i,j,m,temp1,temp2;

	int l1=s1.length();
	int l2=s2.length();

	cost[0][0]=0;

	for(i=1;i<=l1;i++)
		cost[i][0]=i;

	for(j=1;j<=l2;j++)
		cost[0][j]=j;

	for(i=1;i<=l1;i++)
		{
		for(j=1;j<=l2;j++)
			{
			m=(s1[i-1]==s2[j-1])?0:1;
            temp1=min(cost[i-1][j]+1,cost[i][j-1]+1);
            temp2=cost[i-1][j-1]+m;
            cost[i][j]=min(temp1,temp2);
			}
		}
	return cost[l1][l2];
	}


int main()
	{
	int t;
	cin>>t;
	while(t--)
		{
		string s1,s2;
		cin>>s1>>s2;
		cout<<count_edit(s1,s2)<<endl;
		}
	//pause;
	}






		


		



		



