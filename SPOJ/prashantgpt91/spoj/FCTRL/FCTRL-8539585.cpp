#include<iostream>
#include<math.h>
using namespace std;
int main()
{
long long int i=0,m=0,t;
long long N,a,b=0;
cin>>t;
for(int k=0;k<t;k++)
{
cin>>N;
for(int j=1;j<=20;j++)
{
m=(int)N/pow(5,j);
b+=m;
}
cout<<b<<endl;
b=0;
}
//system("PAUSE");
return 0;
}



