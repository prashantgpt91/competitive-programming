#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#define lol 3200
#define x 10000000
bool mudgal[x];
using namespace std;
vector <int>d;
int a[352][352],b[352][352],n;
 char grid[352][352];
void prime();
int binary_search(int key);
void hack(int r,int s);

int main()
{
int t,i,j,p,y;
char P,O,E;
long long int ans=0;
 prime();
 
cin>>t;
while(t--)
{
 ans=0;
 cin>>n;
 
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>a[i][j];
   y=a[i][j];
   if(mudgal[y]==0)
   {
   grid[i][j]='P';
   //p=binary_search(b);
   //count[i][j]=p-1;
   }
   else if(y%2==0)
   {
   //ans=ans+y/2;
   grid[i][j]='E';
    }
   else
     //ans=ans+(y+3)/2;
     grid[i][j]='O';
   }
 }
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  b[i][j]=0;
 }

  
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(b[i][j]==0)
   {
   y=a[i][j];
   //b[i][j]=1;
   
   if(mudgal[y]==0)
   {
   p=binary_search(y);
   ans=ans+p;
   }
   else if(y%2==0)
   {
   ans=ans+y/2;
   hack(i,j);
   }
   else
   {
   ans=ans+(y+3)/2;
   hack(i,j);
   }
  }
 }
}
   printf("%lld\n",ans);
}
//system("PAUSE");
}

int binary_search(int key)
{
    int imin,imax;
  imax=d.size();
  imin=0;
  while (imax >= imin)
    {
      int imid=(imin+imax)/2;
 
      if(d[imid]<key)
        imin = imid + 1;
      else if (d[imid] > key )
        imax = imid - 1;
      else
        return imid;
    }
  
}
void prime()
{  
int m,n,t;
mudgal[0] = mudgal[1] = 1;
for (int i = 2; i <lol; i++) 
{
if (mudgal[i]!=1)
 {
for (int j = 2; i * j <x; j++)
mudgal[i * j] = 1;
}
}
 
 
for(int i=0;i<10000000;i++)
{
if(mudgal[i]==0)
d.push_back(i);
}

}

void hack(int r,int s)
{
 int a,q,w,l;
 a=r-1;
 w=r+1;
 q=s-1;
 l=s+1;
 if(b[r][s]==1)
 return;
 b[r][s]=1;
 if((a>=0 && grid[a][s]==grid[r][s]))
 {
// b[a][s]=1;
 hack(a,s);
 }
 
  if((q>=0) && (grid[r][q]==grid[r][s]))
 {
 //b[r][q]=1;
 hack(r,q);
 }
 
  if((w<n) && (grid[r+1][s]==grid[r][s]))
 {
// b[r+1][s]=1;
 hack(r+1,s);
 }
 
if((l<n) && (grid[r][s+1]==grid[r][s]))
 {
 //b[r][s+1]=1;
 hack(r,s+1);
 }
 

 return;
}