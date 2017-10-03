#include<cstdio>
#include<cstdlib>;
#define size 65536
int main()
{
char b[size];
int t=0,n,k,ct=0;
int c,j;
scanf("%d %d\n",&n,&k);
while((c = fread_unlocked(b,1,size,stdin))>0)
{
for(j=0;j<c;j++)
{
if(b[j]=='\n')
{
if(t%k==0)ct++;
t = 0;
}
else
{
t = (t*10) + (b[j]-'0');
}
}
}
printf("%d\n",ct);
return 0;
}

/*The control of process will remain to your execution until whole input is completed.These functions may be used to avoid the overhead of locking the stream for each character, and to avoid input being dispersed among multiple threads reading from the same stream. */