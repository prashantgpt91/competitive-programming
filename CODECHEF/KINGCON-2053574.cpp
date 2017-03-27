#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
 
using namespace std;
 
int vis[3100],hi[3000],lo[3000];
bool protect[3000];
vector<int> vec[3000];
 
int ans=0;
void inz(int n)
{
    for(int i=0;i<n;i++)
    {
                vis[i]=0;
                hi[i]=0;
                lo[i]=0;protect[i]=0;}
}
/*
int visit(int x, int root){
int i, y, m, res, child = 0;
 
res = val[x] = ++id;
for(i = 0; i < alist[x].deg; i++){
y = alist[x].adj[i];
if(!val[y]){
if(root
} else {
res = min(val[y], res);
}
}
return res;
}
*/
void DFS(int root,int parent,int time)
{
        vis[root]=1;
        lo[root]=hi[root]=++time;
        int i,j,k,l,m,n,test;
        int child=0;
        
        /*
        // When ArtPt(w) is completed, Low[w] stores the
// lowest value it can climb up for a subtree
// rooted at w.
// Recall v is the parent of w
*/
        for(i=0;i<vec[root].size();i++)
        {
           if(vis[vec[root][i]]==0)
                {       child++;
                        DFS(vec[root][i],root,time);//// v has no predecessor , so v is the root.
                        if(root==0)
                        {if(child==2)protect[0]=1;}
                        else if(lo[vec[root][i]]>=hi[root])// subtree rooted at w can't climb higher than v
                        { protect[root]=1;}
                        lo[root]=min(lo[vec[root][i]],lo[root]);}
 
                else if(vec[root][i]!=parent)// update Low[v] if a back edge climbs higher
                {lo[root]=min(lo[root],hi[vec[root][i]]);}
 
        }
        vis[root]=2;
}
 
int main()
{
        int i,cnt,k,l,m,n,test,c;
        cnt=0;
        scanf("%d",&test);
        while(test--)
        {cnt=0;
                scanf("%d %d %d",&n,&m,&c);
                for(i=0;i<n;i++)vec[i].clear();
                for(i=0;i<m;i++){scanf("%d %d",&cnt,&k);vec[cnt].push_back(k);vec[k].push_back(cnt);
                }
 
                inz(n);
                DFS(0,-1,0);cnt=0;
                for(i=0;i<n;i++)
                        if(protect[i]==1)cnt++;
                        
                printf("%d\n",cnt*c);
        }
 
}