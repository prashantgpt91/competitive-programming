#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
 
vector<int>adj[100005];
 
int heightof[100005];
 
int dfsin[100005],dfsout[100005];
int dfsnumber;
void dfs(int at,int height)
{
vector<int>::iterator it;
heightof[at]=height;
dfsin[at]=dfsnumber;
dfsnumber++;
it=adj[at].begin();
while(it!=adj[at].end())
{
dfs((*it),height+1);
it++;
}
dfsout[at]=dfsnumber;
dfsnumber++;
return;
}
 
int main()
{
int t,n,i,j;
int padosi,root;
cin>>t;
while(t--)
{
cin>>n;
 
for(i=1;i<=n;i++)
adj[i].clear();
 
for(i=1;i<=n;i++)
{
cin>>padosi;
if(padosi==0)
root=i;
else
adj[padosi].push_back(i);
}
  dfs(root,0);
  
/*
for(i=1;i<=n;i++)
{
for(j=0;j<adj[i].size();j++)
cout<<adj[i][j]<<" ";
cout<<"\n";
}
 
 
  i=1;
while(i<=n)
{
cout<<i<<" "<<dfsin[i]<<" "<<dfsout[i]<<" "<<heightof[i]<<endl;
i++;
}
cout<<endl;
 
*/
 i=1;
 
long long sumofheights=0,total=(long long)n*(n-1);
total/=2;
while(i<=n)
{
sumofheights+=(long long)heightof[i];
// cout<<heightof[i]<<" ";
i++;
}
// cout<<sumofheights<<" "<<total-sumofheights<<endl;
printf("%llu %llu\n",sumofheights,total-sumofheights);
 
 
}
 
}