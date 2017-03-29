#include <iostream>
#include<cstdio>
using namespace std;
 
int main()
{
    int n,m,q,i,j,query,k,cc;
    cin>>n>>m;
    int a[n][m];
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>q;
    while(q--)
    {
 
        cin>>query;
        cc=0;
       i=0;
       j=m-1;
       while(cc==0 && i<n && j>=0)
       {
           if(query==a[i][j]){cc=1;
            printf("%d %d\n",i,j);}
        else if(query>a[i][j])
            i++;
        else
            j--;
 
//            for(k=0;k<m;k++)
//            {
//                if(a[i][k]==query){
//                    cc=1;
//                    printf("%d %d\n",i,k);
//                }
//            }
 
        }
        if(cc==0)
            printf("-1 -1\n");
       }
    }