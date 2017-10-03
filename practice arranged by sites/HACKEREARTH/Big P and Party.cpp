#include<iostream>
#include<vector>
#include<stdio.h>
#include<set>
#include<algorithm>
#include<queue>
 
 
using namespace std;
 
#define inf 1000000009
vector<int> v[1009];
int ans[1009];
void BFS()
{
	queue<int> q;
	int i,j,k,l;
	q.push(0);
	while(!q.empty())
	{
		j=q.front();
		q.pop();
		l=ans[j];
		l++;
		for(i=0;i<v[j].size();i++)
		{
			k=v[j][i];
			if(ans[k]>l)
			{
				q.push(k);
				ans[k]=l;
 
			}
		}
	}
 
}
int main()
{
	int a,b;
	int i,j,k,l;
	scanf("%d %d",&a,&b);
	for(i=0;i<b;i++)
	{
		scanf("%d %d",&j,&k);
		v[j].push_back(k);
		v[k].push_back(j);
	}
	for(i=0;i<a;i++)
	{
		ans[i]=inf;
	}
	ans[0]=0;
	BFS();
	//start from i+1
	
	for(i=1;i<a;i++)
	{
		if(ans[i]==inf)
			cout<<"-1"<<endl;
			else
		cout<<ans[i]<<endl;
	}
	
}