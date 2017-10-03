#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;
int a[100002],b[100002],m;

struct event{
int x,y;
};

bool compare1(event i1, event i2)
{
    if(i1.x==i2.x)
    return (i1.y > i2.y)? true: false;
    else
    return (i1.x < i2.x)? true: false;
}
int main()
{
    int n,p,g,i,j,temp1,ans,prevtemp,temp2,xx,h,zz,yy,start,end1,temp3,ff;
    scanf("%d%d%d",&n,&m,&p);
    struct event v[p];
    for(i=0;i<p;i++)
    {
    scanf("%d%d",&v[i].x,&v[i].y);
    temp2=v[i].x;
    b[temp2]++;
    }
    sort(&v[0],&v[p],compare1);
    xx=0;
    for(g=1;g<=m;g++)
        a[g]=g;
        int temp6[m];
for(i=1;i<=n;i++)
{
    int rt=0;
    xx+=b[i];
    yy=b[i];
    ans=m-1;
        start=xx-yy;
        end1=xx;
        for(h=start;h<end1;h++)
            {
                if(v[h].y==m)
                    ans++;
                if(v[h].y==1)
                    ans--;
                a[v[h].y]++;
                if(v[h].y<m)
                {
                    if(a[v[h].y]>a[v[h].y+1]){
                        ans=-1;
                        break;}
                }
                temp6[rt]=v[h].y;
            //cout<<" fdgfd "<<temp6[rt]<<endl;
                rt++;
            }



    //for(int u=0;u<rt;u++)
        //cout<<temp6[u]<<"  "<<endl;
    for(int u=0;u<rt;u++){
                int tr=temp6[u];
                a[tr]=tr;
            }
    printf("%d\n",ans);
}
}