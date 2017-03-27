#include<iostream>
 
using namespace std;
 
 
int main()
{
 int t,n,i,j;
 
 //p1=30;
cin>>t;
for(i=0;i<t;i++)
{
cin>>n;
long long int A[n+1],B[n+1];
if(n==1){
printf("3\n");
continue;}
if(n==2){
printf("9\n");
continue;}
A[2]=3;
B[2]=6;
for(j=3;j<=n;j++)
{
A[j]=A[j-1]+ B[j-1];
B[j]=2*A[j-1]+B[j-1];
}
printf("%lld\n",A[n]+B[n]);
}
return 0;
}
 