#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int n,m,k;
int a[20],temp[20];
int arrest();
int max22(int x,int y);

int main()
{
int i,j,p,f,v,t,ans,s,q,g;
cin>>t;
 while(t--)
 {
  v=0;
  ans=18;
  cin>>n>>k>>m;
  for(i=0;i<n;i++)
  cin>>a[i];
 
int str[n];

p=pow(2,n);
//printf("p hai %d\n",p);
//i=2;
for(i=0;i<p;i++)
{
v=0;
j=n-1;
int m=i;

while(m>0)
{
 str[j]=m%2;
 m=m/2;
 j--;
 }



 for(f=j;f>=0;f--)
 str[f]=0;
 


 
 for(s=0;s<n;s++)
 temp[s]=a[s];
 for(q=0;q<n;q++)
 {
  if(str[q]==1){
   temp[q]++;v++;}
 }
 //cout<<"helkl "<<n<<endl;
 //cout<<"i = "<<i<<endl;
 
g=arrest();

if(ans>v && g==0)
{
         ans=v;
         //cout<<i<<" "<<ans<<endl;
         }

   
}
     
                 
  if(ans!=18)         
  printf("%d\n",ans);               
  else 
  printf("-1\n");
}

//system("PAUSE");
}

int arrest()
{
   //cout<<n<<" "<<k<<" vdsuav "<<endl;
   //cout<<m<<" edcf "<<endl;
 int cnt=0,i,j,r=0;
 int b[n-k+1];
 int c=0;
  for(i=0;i<=n-k;i++)
  {
  //printf("sfgqe3rahg %d\n",i);
  cnt=0;
  int gf=max22(i,i+k-1);
   for(j=i;j<=i+k-1;j++)
   {
    if(temp[j]==gf)
     cnt++;
   }
   //printf("%d cnt\n",cnt);
   if(cnt>=m)return 1;
  
 }

 return 0;

}


int max22(int x,int y)
{
 int d,maxnum;
 maxnum=temp[x];
 for(d=x;d<=y;d++)
 {
  if(temp[d]>maxnum)
  maxnum=temp[d];
 }
 return maxnum;
}