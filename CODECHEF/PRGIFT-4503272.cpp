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
#include<string.h>
#include<math.h>

#define pause system("PAUSE")

using namespace std;
int a[55];
int main(void)
{
int n,i,j,k,t,cnteven,cntodd;
cin>>t;
while(t--)
	{
	cnteven=0;
	cntodd=0;
	cin>>n>>k;
	
	for(i=0;i<n;i++)
		cin>>a[i];
	int d=0;
	for(i=0;i<n;i++)
		{
		if(a[i]%2==0)
			{
			cnteven++;
			if(cnteven==k && k>0)
				{
				printf("YES\n");
				d=1;
				break;
				}
			}
		else
			cntodd++;
		}

	if(d==0 && k>0)
		printf("NO\n");
	else if(k==0 && cntodd>=1)
		printf("YES\n");
	else if(k==0 && cntodd==0)
		printf("NO\n");
	}
//pause;
	
	}