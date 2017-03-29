#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
using namespace std;
 
int main()
{
 
int t,n,i,j,d,cnt,f,dead;
scanf("%d",&t);
while(t--)
{
f=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort(a,a+n);
d=0;
int cnt=0;
for(i=0;i<n;i++)
 {
   if((a[i]-d)<=0)
    {
     printf("Goodbye Rick\n");
     printf("%d\n",i);
     f=1;
     break;
    }
    else
	d++;
	
	if((i+1)%6==0)
	d++;
 }
if(f==0)
printf("Rick now go and save Carl and Judas\n");
}
}