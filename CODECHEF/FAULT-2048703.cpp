#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int aa[1010][210];
int main()
{
	int n,s,i,j,k,cnt,x,minindex,min,p,q;
	cin>>n>>s;
	int a[n],b[s];
	for(i=0;i<n;i++)
	a[i]=0;
	for(i=0;i<s;i++)
	{
	cin>>aa[i][0];
	 p=aa[i][0];
	for(j=1;j<=p;j++){
	cin>>aa[i][j];
	 q=aa[i][j];
	a[q]++;
    }
    }
	min=a[0];
	minindex=0;
	/*for(i=0;i<n;i++)
	printf("%d ",a[i]);
	system("pause");*/
	for(i=1;i<n;i++)
	{
	 if(a[i]<min){
	  min=a[i];
	  minindex=i;}
    }
 x=0;
//printf("%d %d\n",min,minindex);
	for(i=0;i<s;i++)
	{
	p=aa[i][0];
	 for(j=1;j<=p;j++){
	 q=aa[i][j];
	 if(q==minindex){
	  b[x]=i+1;x++;break;}
    }
   }

  if(x==3){
   printf("1\n");
   printf("%d\n",b[1]-1);
   }

   else{
  printf("%d\n",x);
for(i=0;i<x;i++)
printf("%d ",b[i]-1);


	printf("\n");}
	return 0;
}