#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#define mod 1000000007
using namespace std;
int main()
{
    int t,n,e;
    cin>>t;
    while(t--)
    {
   unsigned long long int ans=0,cnt=1,ans2=1;
  //freopen("t22.txt","r",stdin);
  //freopen("check.txt","w",stdout);
    cin>>n>>e;
    vector < vector <int> > G(n);
    for (int i = 0; i < e; i++)
    {
    int a,b;
    cin >> a >> b;
    a--;b--;
    G[a].push_back(b);
    G[b].push_back(a);
    }
    int visited[n];
    memset(visited,0,sizeof(visited));
     ans = 0;
    for (int i = 0; i < n; i++)
    {  
    if (!visited[i])
    {
    queue <int> q;
    q.push(i);
    visited[i] = 1;
    cnt=1;
    while (!q.empty())
    {
    int u = q.front();
    q.pop();
    //printf("%d hhah\n",G[u].size());
    for (int j = 0; j < G[u].size(); j++)
    {
    if (!visited[G[u][j]])
    {
    visited[G[u][j]] = 1;
    q.push(G[u][j]);
    cnt++;
    }
    }
    }
    ans++;
    ans2=(ans2*cnt)%mod;
    }
    }
    cout << ans << " " << ans2 << "\n";
    
    }
//    system("pause");
    }