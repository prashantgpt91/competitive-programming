#include<iostream>
using namespace std;
int f[100001];
int cc=0;
int count(int number) {
	int flag2=0;
	while(number%2==0){
	number/=2;
	flag2=1;}
	if(flag2==1)
	cc++;
	int flag=0;
    for(int i=3;i*i<=number;i=i+2)
    {
	 flag=0;
        while(number%i==0)
        {
		    flag=1;
            number=number/i;
        }
         if(flag==1)
         cc++;
    }
    if(number>2)
    cc++;
    return cc;
}
 
void precal()
{
for(int x=2;x<=100000;x++)
{
int p=count(x);
f[x]=p;
cc=0;
}
}


int main()
{
 precal();
 //for(int i=2;i<=100000;i++)
 //printf("%d\n",f[i]);
 //printf("%d\n",f[14]);
 //system("pause");
 int a,b,t,k,cnt=0;
 cin>>t;
 while(t--)
 {
  cnt=0;
  cin>>a>>b>>k;
  for(int i=a;i<=b;i++)
   {
	  if(f[i]==k)
	  cnt++;
   }
   printf("%d\n",cnt);
 }  
 //system("pause");
}