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
 
int a[13];
int globalsum=9999;
void fun(int j,int n1,int sum1,int sum2,int sum3)
	{
	if(j>=n1)
		{
		if(sum1>=sum2 && sum2>=sum3)
			globalsum=min(globalsum,sum1);
		if(sum2>=sum1 && sum1>=sum3)
			globalsum=min(globalsum,sum2);
		if(sum3>=sum2 && sum2>=sum1)
			globalsum=min(globalsum,sum3);
		return;
		}
		
	fun(j+1,n1,sum1+a[j],sum2,sum3);
	fun(j+1,n1,sum1,sum2+a[j],sum3);
	fun(j+1,n1,sum1,sum2,sum3+a[j]);
	}
 
int main()
	{
	int i,j,n,s1,s2,s3;
	cin>>n;
 
	for(i=0;i<n;i++)
		cin>>a[i];
 
	fun(0,n,0,0,0);
	cout<<globalsum<<endl;
	//pause;
	}