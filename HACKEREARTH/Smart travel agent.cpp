#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include<climits>
#include <cmath>
#include <queue>
#define inf INT_MIN
using namespace std;
int a[105][105],b[105][105];
 
 
void print(int source,int destination)
{
if(source==destination)
	return;
int s=b[source][destination];
printf("%d ",s);
print(s,destination);
}
 
 
 
int main()
{
int n,e,i,j,x,y,k,wgt,src,dest,m;
scanf("%d%d",&n,&e);
   
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i!=j)
a[i][j]=inf;
else
a[i][j]=0;
 
b[i][j]=j;
}
}
 
for(i=0;i<e;i++)
{
scanf("%d%d%d",&x,&y,&wgt);
a[x][y]=a[y][x]=wgt;
}
 
scanf("%d%d%d",&src,&dest,&m);
if(src!=dest)
{
for(k=1;k<=n;k++)
 {
        for(i=1;i<=n;i++)
		 {
                if(a[i][k]!=inf) 
				{
                    for(j=1;j<=n;j++)
					 {
                        if(a[k][j]!=inf && i!=j)
                        {
 							int p2=min(a[i][k],a[k][j]); 
							int xx=a[i][j];
							//if(p2==xx)
							 // b[i][j]=min(b[i][j],b[i][k]);                    
                            a[i][j]=max(a[i][j],p2);
                            if(xx!=a[i][j])
                             b[i][j]=b[i][k];
                        }
                    }
                }
            }
        }
 
int p1=a[src][dest];
 
float p=(1.0)*m/(p1-1);
printf("%d ",src);
print(src,dest);
printf("\n");
printf("%d\n",(int)ceil(p));
}
else
{
printf("%d",src);
printf("%d\n",1);
}
}