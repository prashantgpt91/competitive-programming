#include<iostream>
#include<string.h>
#include<cstdio>
#include<algorithm>

using namespace std;
int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}
int main()
{
	long long int t,n,m,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		printf("%d\n",1+gcd(n-1,m-1));
	}
	return 0;
	
}