#include <iostream>
#include<cstdio>

using namespace std;

int main()
{

    int i,j,t,x,y,casee,cnt,num,haha;
  freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
    cin>>t;
    casee=1;
    int a[4][4],b[4][4],check[17];
    for(i=0;i<17;i++)
        check[i]=0;
    while(t--)
    {
        for(i=0;i<17;i++)
        check[i]=0;
        cnt=0;
        cin>>x;
        x--;
        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
            cin>>a[i][j];

            check[a[x][0]]=1;
            check[a[x][1]]=1;
            check[a[x][2]]=1;
            check[a[x][3]]=1;


            cin>>y;
            y--;
        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
            cin>>b[i][j];

            if(check[b[y][0]]==1){
                cnt++;num=b[y][0];}
            if(check[b[y][1]]==1){
                cnt++;num=b[y][1];}
            if(check[b[y][2]]==1){
                cnt++;num=b[y][2];}
            if(check[b[y][3]]==1){
                cnt++;num=b[y][3];}




            if(cnt==0)
                printf("Case #%d: Volunteer cheated!\n",casee);
            else if(cnt>1)
                printf("Case #%d: Bad magician!\n",casee);
                else
                    printf("Case #%d: %d\n",casee,num);

                    casee++;
    }


}






