#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<cstdlib>
#include<cstring>
#include<string.h>
#define M 10
using namespace std;
int a[100002];
void swap(int &x,int &y)
{
	int tmp;
	tmp=x;
	x=y;
	y=tmp;
}
int main()
{
	int n,i,t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	memset(a,0,n+1);
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		if(i%2==0 && a[i]>a[i+1])
		swap(a[i],a[i+1]);
		else if(i%2==1 && a[i+1]>a[i])
		swap(a[i+1],a[i]);
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	}
}
//	long long int ans=expo(a,b);