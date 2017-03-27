#include <iostream>
 #include<cstdio>
#include<algorithm>
#include<set>
using namespace std;
struct event{
unsigned long long int b,l;
};
bool operator< (event const& A,event const& B)
{
return (A.b < B.b);
}
int main()
{
unsigned long long int t,n,i,j,k;
unsigned long long int s;
cin>>t;
while(t--)
{
s=0;
cin>>n;
unsigned long long int a[n+1];
struct event v[n];
for(i=0;i<n;i++){
scanf("%lld%lld",&v[i].b,&v[i].l);
s=s+v[i].l;
}
j=0;
sort(&v[0],&v[0]+n);
unsigned long long int min1=v[0].l;
for(i=1;i<n;i++)
{
if(v[i].b==v[i-1].b)
{
if(v[i].l<min1)
min1=v[i].l;
}
else{
a[j]=min1;
min1=v[i].l;
j++;}
}
a[j]=min1;
sort(a,a+j+1);
/*for(i=0;i<=j;i++)
printf("%d ",a[i]);
system("pause");*/
//printf("%d ja hai \n",j);
unsigned long long int p=0;
unsigned long long int sum=0;
for(i=0;i<=j;i++){
p=p+(a[i]*(i+1));
sum=sum+a[i];
}
unsigned long long int ans=p+((s-sum)*(j+1));
printf("%lld\n",ans);}
//system("pause");
}