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
#define pause system("PAUSE")

using namespace std;
int a[5002],cost[5002];


/*
Let arr[0..n-1] be the input array and L(i) be the length of the LIS till index i 
such that arr[i] is part of LIS and arr[i] is the last element in LIS, then L(i) 
can be recursively written as
L(i) = { 1 + Max ( L(j) ) } where j < i and arr[j] < arr[i] and if there is no such j then L(i) = 1
To get LIS of a given array, we need to return max(L(i)) where 0 < i < n
*/
int main()
	{
	int n,i,x,j,p;
	x=0;
	cin>>n;
	
	//vector<int>v;
	for(i=1;i<=n;i++)
		cin>>a[i];
	if(n==1)
		{
		cout<<"1"<<endl;
		exit(0);
		}
	for(i=1;i<=n;i++)
		cost[i]=1;

	//v.push_back(a[1]);
	for(i=2;i<=n;i++)
		{
		for(j=i-1;j>=1;j--)
			{
			if(a[i]>a[j] && cost[i]<cost[j]+1)
				{
				cost[i]=cost[j]+1;
				}
			}
		}

	int max1=cost[1];
	for(i=2;i<=n;i++)
		{
		if(cost[i]>max1)
			max1=cost[i];
		}
	cout<<max1<<endl;
	
		//for(i=0;i<v.size();i++)
			//cout<<v[i]<<" ";
	//pause;
	}






		


		



		



