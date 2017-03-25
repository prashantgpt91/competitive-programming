#include<stdio.h>
#include<string.h>
unsigned long long int mod(char s[],unsigned long long int d,unsigned long long int l)
{
unsigned long long int r=0;
 int i;
for(i=0;i<l;i++)
{
r=r*10+(s[i]-48);
r=r%d;
}
return r;
}
 
unsigned long long int gcd( unsigned long long int a,unsigned long long int b){

if(b==0)
return a;
else
return gcd(b,a%b);
}

int main()
{
int t,j,l; 
unsigned long long int a;
char b[252];
scanf("%d",&t);
for(j=0;j<t;j++)
{
scanf("%llu",&a);
scanf("%s",b);
l=strlen(b);
if(a==0)
{
      printf("%s\n",b);
}
else
{
printf("%llu\n",gcd(a,mod(b,a,l)));
}
}
return 0;
}


 




