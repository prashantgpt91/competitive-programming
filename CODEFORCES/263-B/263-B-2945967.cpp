#include<iostream>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
 int i,j,k,n;
 cin>>n>>k;
 int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 
 if(k>n)
 printf("-1\n");
 else
 {
 sort(a,a+n);
 //to have inside n squares (0,0)-(a[0],a[0])
 //to have inside n-1 squares (a[0],a[0])-(a[1],a[1])
 //a[n-k-1][n-k-1] to a[n-k][n-k]
 printf("%d %d\n",a[n-k],a[n-k]);
}
 //system("pause");
 
}