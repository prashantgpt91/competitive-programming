#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <queue>
 
using namespace std;
 
int n,ct;
char mp[35][35];
int dis[35][35];
 
int start_bfs(int x,int y){
      queue < pair<int,int> > q; 
	  q.push(make_pair(x,y)); 
	  dis[x][y] = 0;
      
while(!q.empty())
{
        pair<int,int> p=q.front(); 
		q.pop(); 
		int cx=p.first; 
		int cy=p.second;
		
    for(int dx=-1;dx<=1;++dx) 
    {
		for(int dy=-1;dy<=1;++dy)
		{
            int nx=cx+dx; int ny=cy+dy;
            if(cx==nx || cy==ny)
			{
            if(nx<0 || nx >=n || ny<0 || ny>=n) continue;
            if(dis[nx][ny]!=-1 || mp[nx][ny]=='T') continue;
            if(dis[nx][ny]!=-1)
            dis[nx][ny] =min(dis[cx][cy]+1,dis[nx][ny]);
            else
            dis[nx][ny] =dis[cx][cy]+1;
            
			q.push(make_pair(nx, ny));
			}
        }
    }
}
    return ct;
}
 
int main(){
int xx,yy,xxx,yyy;
   scanf("%d", &n);
   int i,j;
   for( i=0; i<n; ++i) {
   for( j=0;j<n;++j)
   {
   cin>>mp[i][j];
   if(mp[i][j]=='E'){
   xx=i;
   yy=j;}
   if(mp[i][j]=='S'){
   xxx=i;
   yyy=j;}
   
   }
}
   memset(dis,-1,sizeof(dis));
   start_bfs(xxx,yyy);
  
   
 /*  printf("see dis\n");
   for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
   {
   printf("%d ",dis[i][j]);
   }
   printf("\n");
   }*/
   printf("%d\n", dis[xx][yy]);
   return 0;
}