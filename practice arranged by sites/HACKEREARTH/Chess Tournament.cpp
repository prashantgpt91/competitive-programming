// ROH.cpp : Defines the entry point for the console application.
//
 
 
#include<iostream>
#include<vector>
#include<stdio.h>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<queue>
#include<bitset>
#include<fstream>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<math.h>
using namespace std;
 
#define scan scanf
#define sscan sscanf_s
#define get gets_s
#define print printf 
#define mod 1000000000
#define ll long long
#define init int i,j,k,l,m,n,test
#define pause system("pause")
#define inf 1000000000
int a[1026][1026];
int main()
{
	init;
	scan("%d",&n);
	m=n;
	n=pow(2,n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			scan("%d",&a[i][j]);
		}
	}
	vector<int> s[2];
	s[0].clear();
	s[1].clear();
 
	for(i=1;i<=n;i++)
	{
		s[1].push_back(i);
	}
	for(i=1;i<=m;i++)
	{
		//check adjacent
		k=i%2;
		s[!k].clear();
		for(j=0;j<s[k].size();j+=2)
		{
			//compare s[k][j] and s[j][k+1]
			if(a[s[k][j+1]][s[k][j]])
			{
				//k, j+1 wins
				s[!k].push_back(s[k][j+1]);
			}
			else 
				s[!k].push_back(s[k][j]);
		}
	}
	k=i%2;
	cout<<s[k][0]<<endl;
	//pause;
}
