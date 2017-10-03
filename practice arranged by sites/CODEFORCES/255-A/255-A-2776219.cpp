#include<stdio.h>

int main()
{
int n,i,b;
scanf("%d",&n);
int a[3];
a[0]=0;a[1]=0;a[2]=0;
for(i=0;i<n;i++)
{
scanf("%d",&b);
a[i%3]+=b;
}

if(a[0]<=a[1] && a[1]>=a[2])
printf("biceps\n");
else if(a[0]<=a[2] && a[1]<=a[2])
printf("back\n");
else
printf("chest\n");


return 0;
}