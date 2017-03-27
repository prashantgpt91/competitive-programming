#include<stdio.h>
//#include<conio.h>

int main()
{
int t,n,i,j,k,y;
unsigned long long p;
scanf("%d",&t);
while(t--)
{
    scanf("%d%d",&n,&y);
    p=n;
    while(y!=2000)
    {
                 
     p=p*p;
     p=p%1000000007; 
     y--;
    }
   printf("%llu\n",p);
}
//getch();              
}