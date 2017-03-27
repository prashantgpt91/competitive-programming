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
int gcd(int a,int b)
	{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
	}


int main()
	{
	int n,t,i;
	int flag=0;
	cin>>t;
	while(t--)
		{
			flag=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
		int curr=a[0];
 for(i=1;i<n;i++)
 {
	int p=gcd(a[i],curr);
	if(p==1)
	{
	flag=1;
	break;
	}
	else
	curr=p;
	
}

	if(flag==0)
		cout<<"-1\n";
	else
		cout<<n<<endl;
		}

	//pause;
	}